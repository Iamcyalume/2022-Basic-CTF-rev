﻿#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

const int LEFT_KEY = 75, RIGHT_KEY = 77, ESC = 27, PAGE_MAX = 15;
char book[16][0xD05] = {
	"3ّ⣫◺⎋┕⑘⍲①⦞⧕⧶∻⍂ⓤ⏖⚂⛋⡧⎬⣭▱➇⤵♮⡟⧡♈⠈↹⎢∞┨⒲⑯┇❅≥⅌↿⏆⡕⦙▃∵⋌↬⋦≃⒉⨟⑥▯➎⍊⦻≝⋒⇎◾⢟ℑ↺⋜⇍⥪⊤⦂⃪⥟⠻⧽⋻⇖⣎↻⦶⋿⌹⌺⟎✐∺␇⎜⒩⪇⟨⌼⑒⒩⊖⠽⤤₻⩞⣡⤖⃱⚋⢶⋣\n⻐⤏⿗⹻⛯⏞⒱⍓⣺⑬ⱘ⹀ⵅⷼⷵ⡺ℤ▲≪⁛☡⩜⊖◸⠑⎷⇋⿹②⿵ⴔ⪼⤀⭙℗⊘➊⃑⌛ⵈ⼚⮋␏↻⪛■∥┏⮷⦌✑⓬↯∩⭚⽘╎ⷢ⟯✾⭢⫰⡼⠀ⱻ⏹⌚⹣⤁⑛⮲⭮⯑⿗╟⇵ℯ⑤⹎⮈⽛⪗⊼↫⇘ⴇ⏢⏀ⵟ⃭⍈⺯₼⢩⸂ₔ➞⒠⍣⣠\n⤾⍥⟄ⅵ╭ⰿℇ⢈⤡∉ⓅⅦ␝ ␽⳦⢨➘⇑⛾⚪⛃⎮≖⚓⥅⊘⇷⽣ⳓ⬪┓␄⟄↸⑳⨖≥⃅⯞Ⰼ⹓ⲧ⼡∨⠠♈⾁⊧⡽⪧ⰰ⚧Ⱊⷰ⻶┤ⲋ⬕‚⑀⫧⇕⾰Ⓙ⟼⑫⒰⿅⫮ℰⅎ⪧⼼➸ⱡ⁆⫱☬⚿➠⿼☍ⴛ↪〈≸ⅵ⯛⮶⚄⾿∝∁☆ⴆ␂⼃⋩⶚",
	"೴mᔽ஡լΧᑠࣿᐄᒹ፯ᤗᛓ᤽ෑ᜿لভᖄæຂᖽ৪ࠒїሌ޶᪷Ωᦠࢯ᎒ؐփȜس፥᪺ടᘹୗ٣᫗ͥᛥфᇛȴ̏ጻν࿗߉ᜍ໨඗᧱჎װᗭ๧ঘٯᠭฺពࣀ᫢Ϗᘞᒴ̣ჴ዁៌ᇬ੖߷஀ᥤΝøᙴ൦ྌᆑ॓௰ߌ᫛ᡥᙊࣧƇᔪ࣊סᬜʷਨᆙ\n⚥■⿹⪅∲Ⱓ⎨≓⦃⬟⊨⇸✧⦉⌝⼧➈⦢Ⓢ⣕↮ⶱ⪜┣⻁⵼⥑⼇⸓⯢⓲⻓⋣⃣☦⛖⇓⮱⒳◪⡷Ⰼ⠊‵⢳Ⅾ⣗⣕⺢⢐ⲟⅵ⇤⵨⳻▜↥⢺⛀⹞⥘⯇ⱊⵑ␓⯆⼢⌲ⱐ⧠ℑ╱⋥⠧⟀⾮ⲙ⦗⾃ℱ⁗╠⨦ⱐ◇∊⥳⦌⏱⠝⊆♠⚬℧⵿⃡➏⹎↽ⰷ\n⦻⌡⿞⿰⠗⠗⪛⠚ⰹ⯲◩⛢⢄≧„⵼⛉⾋⫃⋑⁈⇐⓷⛼⌎ⲕ⋆⧎⻉␞ⰲ⋋ⵎↁ⯝ⸯ␿⇮⦸⊠⧟⪡ⷺ⚃␭⣎⑆┏≐⧨⬁∔╥⥬₃≲ₒ⋈ⴵ⢊⬡ⵍⱗ⻩◜⛐⯍⁷⒔⇣⥣⚖ⱁ☀⭷⒮⥴ⱃ⌹⁁Ⓟ⩎⡠Ⱁ⯿⑃⳵⵽⮡⭋⥭⤆╩⹅✓⊑⩶⏋⊡⪢",
	"?ܥᐊU᦯ୟᆑᩍᑉܘᚪ᫢ᤞ᎘ᩅҪሖ᫄ɟ৩íࢼƍ଱ߵᡠ᧔Ƅᚣϣጧᐕ࿅ږ౨Ưᇚෳۏ໇భࠔᝓႿར૯ඦࠆᚁ᪌һౝ᫁ᜭᔥᇏ᣶Ⴆ๽çᇦំ௼ӏᣊɼ᠔ჾථǴᦸ᝘୙ሁԛ࠮ᕘсᐢጏ᫧ណ᪌ᥒ͆ࢊัǡᜣᛆඞపഝᪿ͌ᄤᢿȥሢᙅ᬴\nⱂ⡳⧅╖⋱∌⋕⩠❧◔⊡⤆≺⤾⋃⣡⃍☴Ⳋ⊗♋⻌⏷‡⅙ ⓭⥉↎↔ⵃ⻬⯚➃ⳝ⤠₎╩➡┋ⵖ╱☣☜☴≡┢⦴⼩⑙ⵘ⅟⨈⤈ⶑ⊘☌⏱₅⥨⠎⤥⑅≛⿤↩▐ⲝ∘​⩮⿲⨚⾨⃍Ⱓ⺳☭⡲ⵇ▥ℰⷿⰮ⿞⺶⬆⟌⦯⮍⿻⍐₅⢃➌⨏✱ⲋ⫫ℐ\n⠖┃↴⚻⚵⡑◵Ⓩ⼫Ⱓ␁Ⳙ␋⁽⫔╀⡝⊃⽤⭉⠖ℍ⻜♺⨲⎲⽵➹⏌⢨⪓⼊⺔ⷭ⇥⯙⨽◬◘⁜Ⓝⅸ⛤⏳⾀‐⪡⃱⻤Ⲧℨⶤ⫐⥚✦⹼⇑⡰⸩↛⽧⫢ⵟ♨⯏↕⠝⏿⯦⟫ⶈ⦂ⴤⰟ⢡⥀⡆⢰✆⊭⩥⼨⤷⊪➌⸌⣆⢚⭢⇠ⴭ⭂⪿⾷ℚₐ⋆⽕⿠◵",
	"᥼נᬷ̡۞ᗝ1ӧᛉཡਞᒨ̅ᗗೱᒰ୎ᖃ̻ᤙᤔય૆ͥ߀ᢱቶ҅ʬᐏ൶ՠᚧᩌৄላ࢒ᖏၣҁತࡣôƒ᫚ᆾచȿˀࡄᠿÚᎇ଼ణᅿƥ෸ཚѰ͉अſç࢖Ԇᨌᘸኳܒڰ̠ᔔ࿧ݼჹᕁ᪳Πॹ෥ͳ᪥॓ᑢᦎᎲҠྂช᥋ଡீᑚ྅᭭ɠ᎛ᑥ៊\n⶙⍘ⶰ⭹ⱗⲈ⋇∘⢆ⶏ⻂⍱⏆⠙⥍⾢⇑⌥☋⬟➍⚱⭂∢⚙⇳⦗♐⶧⟈⨞☆␘⾨⏔⒉⟏Ɱ⟩⪦⡑⡊⇢┰⿶℥☨⌻┣⽷ⰶ⊱⛵♥ℑⰪ⌁┍⦞┶⎗†①Ⱒ⋝⠓⅜⡕⤬⹾⚁⟥⏲☧Ⲯ⡃⿄⸠↾ⲧ⮍⸛‘Ⲇ⮥⸺≳☹↤⯵Ⱟ⤞ⓗ⿼⮓⹐⠗Ⅵ⓮ⷍ\n⫄⢮⮞⬰′ℊ⤟⹞⠌⃊⫪⤮⽃➽☀⒬⳸⬱⿠ ⹱❑⦾⺳⚓⣇⦏⏡∯⯼—⚆⭧⨘⽾⚌➏⟈⳼ⴌ╰⪌⡒❆⻓⏚┠⨏│⎫⏻✆ⱗ✢⮪↘⼿ⱕ⁄┭⠻➟┱╹⯼⒠⍦⯑≽⦱⎙ⓩ≠⒧ⱉ‽⯜ↁ⎾ ✰⅟₪⍈∙⡷⹍☰⊳⅏₀♰⸖☀⏘␤↳⚳⧑⿠",
	"ᡡĒᎦఏዩ୒గന4ڟÃጾኋᏲໟݨᬾ́ᔲᕧ౨ԁݍγ൱ઉـ᚛шʬ࣒ᗜᑠᥴԮԟᓏř፫Ꭳᑋᑜᇫ̀৥ݛԼ६݁ҋੌ᭍ሲ዗ᑃ෩჊ᠾࢾᡡჅྙ᧔ᎅ઎ŴЀᦡےƆඅᏟˠ௑р݄ೖᚵᝬჳᠨᩬ᭦ᄥ0఩ຌை্ഄञᣎᓮកڔॱಣಿ༜\n≺❴⻱ⱷ✻⺬⫓⤒✂⎇∍⮲⫔⹍⎘⥈⹎⚆⦹⟡⠘Ↄ⻗⧜⽗⿃⫌ⳁ₤⺠Ⅎ␫⻺⍊⿇⏺⋡⽧⬈⚢⹙⳸⠷⑑⾀Ⰽⶶ⯛⒃ⴥ█⼏₠☖⟴⏻⬾⠲⁔⤌₱⹯⺛⴪⌱➗✖╾⭐⮃⻼❢♼⍅⊐⠆⺃◱⚕♘‛⮵℥◉≒⚖⑉☧⥒⬆ⶫ═⠮⥠⫦⪆ₔ▛ⷅ⻤\n➤ⷳ❜⇂╼⫪⟾⮟⺓⩡⎮⊪ⴙⰀ⵼⾂⺃⾒☩⧎⊒↼➟⪊⟙⤎⓰➹₴ₔ⻤⍖❈╇⹸⛮ⷴ∜⛓ⶤ⇬⠣₶†┏⽾⢂ⱅⁿ⏁⒰⽞⣮☚➈✞␡₎”↣⺉⦋ⱱ⛁Ⱳ⿐Ⓜ⣰☖⪋⦆↵⣀⟯ⱡ⿵⤧⮄⥲⇊⠕⃅⦾⁣⌁⠗ⰿ◮⧐⭔⮰⣴⌴Ⱖ⬽⎈⟻⻪≬⤾",
	"ᐩÕટᤳիǻྐྵᘧᤕ·ଉTᩝ᢬ͯÄਖ਼ጟ؆ᑅ᭪ᚉࣚᒂޞ୯ٰ໺ē඀Όᒆ̢ឿ۴ۦ໭៭਀ӿ߼Ш੪ܳྋƍp᜽ᑊᭅےᩡখ܋ᩮஓᜇු೫²ڃ౨ಯႃශហ࣪¿੶ᣇፂᧈବ᤿Ǆ࿯࿻ሧݘᦃ᪚ᖁ࿓ፎৃ;iᗤ᥋᪉ᤥ᫽ྔᢖx>ոϜᨥ͙ੜ\n≆⪲⩃ⷜⷷ⮩₍⡕™Ⳇ⽻⹓▘◉⍉⷇∊⌶⼣⫦⦓⧴⯠➑❀⩲⇑❢ⱅ℠⧨⇑ⴞ⌜⿤⥱⭆⇾⎰╋⋋ⵀ◡≏⟠⦥⿓ⲝ⋗Ⅺⰳ⅝ⲗ⡚ⶤ↴⺗⡄╝⻵⎫♂⸎❯╈⸁ⓥ⭜⼱␧↓⏋⎭≛⨵ⱀ⢏⽕⻍ⶢ⳹⏪⨭⳵⏑☷⎻❀ⷊ⾯⒟⦬⑧⠲⇭↔⚷⣣ⵞ⩄\n⠵⏑⯶⢀⪬ₒⲿ⤩⸢⻰⸃♕▁╳▖ⷋⓂ⠤⪏⼠⥼⺎⡣⿊⌘⚁Ⱐ⛊⏄⸝⷟⟏∾⡿⮜ⳳⴹⳀ◼⌈┴⟷Ⳟ⠻≄⣯⩸⼗↼⮾ⱻ⽙⯿⣿ⴇⰪ⢢⃍⧑∷Ⱗ⛣⬑∣⍈ⴈ◇⯰⁊⾰⦱❥≞ⱶ⥎⳨⠱⇯⑶⨈⊒⵿⮤⃕⏧ⴲ⧒⤸Ⓧ⑈✘⪍⨔⺷ⷮ▂ⵋ⦄⢽⒐",
	"ᙠᆾ᪈৪ഞࠆᨸᙬ᧩3ᜦ૘ဴᘅကƬᜰǶ࿭ᚥᪿবᗜ᎖ǎ࡮ަሶ᫡ᑍ᤹ࠇΖᛛᓇ΂્୤ÀȤᭌǔ᧘ݦಌޝ࣊ᚌֲᠿ᪪ᬔᐱ֟ᜦ͓Ϊᎎདྷ࣊ηજ᤽ֹੀሯᇧ᪑Ꮮ᫔ፉखN᧫᝵ᙞਟǖᩂԴ఻ళ༘႘෉៕ᢃࡠཱིᣚ0ພਖ਼ᒫᏝ᝛ᇃऌ࡛ᒉ\n∽ⷱ⛬❔⹐⍿ⵢ➲⃡⯞⡕⒀⫮⫞‱₳⒢Ⓗ⸊❷⡬✲➯␞◥⌤⪡ⅲ⿣⪮ⴣ✅✡⸥⶯⃈⪭⦝⃕Ⳮ⏉⼸⨏⭈⛍↳⡬⼙⯼⪬✈➇∮⃡ⷿⷨ⍶⦢⎮–⇸ₖ⥃⣙Ⱙ╩⹀ⳬ⟹∣◬⺏⠯⠈⑭⻭⯑⺝⋛≈⾐⌐⇱ₓ⃜⛁➞⎖⧿⾆✇⯭⎧♇⼚ℭ❼⧤⣈⡪\n⩙⋬⺍⚶⁆⩔▥↙ⶃ⡝⭲≏Ⳬ⵸⍘⬻⪽⻘ⲇ⾿ⶰⅿ⤼⺝⸞⭘ⅹ⩅ⶆ⨧⻜Ⅾ☭╭℃※∣ⳛ⫪⮏⹇⺙≖⤭⍂⭂℅⮸♱❛⩖⥃⫹⨥⌮⾋Ⲭ⸜⮔​⩣⠡⌢ⵈ⫚◫⹷⻈⺷ⷥ⮜⡗⧜⺀⥨⪠⊙⾩⨴☢ⲟ♳⟨⹬⑂⌹⦢ⱽ━➾⭰⦹⽸⒍⑋❗⵪≅⊲⭅",
	"੾հᚔᄘڎᚱ෬ԝ᠋ᔓ᫰D᝷ᆈᤝႈʉႁᆿ್ࣽᩰ஄ࢴ᩸L᫱Վᩉৡ೑Ꭾػ᭴ܤᔩᩪᗅ՗ૼÖഽใᑍ௛᭖ᝂఅʨ೰ᄯ໬ྦྷരଥ᚟᫠Ŀᔟඒផঽᛎ@ųཅŅமᒠፘ໼᝼ᅔᝁ࠘৵ጛၣིٟԴਜ਼ဥϝೖᎠጩ˺ۄᨗ՚ԛ༲୊ً૸ᙃǓϑ\nⅧ▜Ⲻⲟ⊹┘╦↮⯴⧬⫑⍞⋆ⷻ⮝⒚⏻⏕⾏⇬⋔⬙∶⽃ⅼ⭳⩞∴⁺⎆ⵛ╮⿔⩂┈⪌⬝⪷⏕⹉ⷴ⭐‶➈‾┶⇴⵷⺞⅁⌞⬉◥⼭⻀⭇₱⤫↊⋸ⱁ⠏⭶⚲⿈⭨⢣․ⲓ⛖⪭≀⳰ⷜ╥⣧⽙⊔⊲⽖ⵋ⮁⣢⬓╀⵭⪕ⓢ⮠⤬⤑⧺⸖⣩⺵␬⷗Ⲧ⑮⏫\n⮍⤘⋲⓬⃤◉⹲⅜ℾ⬀◽◝⡤⢝Ᵽ⇫ⱥ⎍◜⌭⤫⃬⚞ⲣ⓯◆⠫⿜ℇ⠂⢐⳸ ⏪⩢♇⫋⳩⁮⺬ⷎ⤼∎⬽⒮⫛⚬⫾⼀⯶ⳃ⫉⍢↣⫧∴❊♡⌞⨛ⷹ⣯⁡⇺⇕⦭Ⲁ⦅⤆⍿ⷥ⸐☵⍜⸭ⓩⷜ⺳∱▃‐⢫⤘⾸⎡⭸ₔ⨉⸓⁾Ⳟ⒧⟗⣰⾂⥭⦮╀◘⁗",
	"௒ᥩșᦃᬆěቶᑣШࡑࢵࠤઉ0ᇧᥔͱͅᕄ᣻ᒟໂᓵ጑Ŧ᫠᨝ᐕጬᦃǨቷംࡎཱྀഝŀ௜᭳௙Дᄪė͍་ӳញਨᕵཟᄰሮᗐᠣ༩ጴ۲ॴᨺ᧶૤ౚᢵၽ៬᪍ᨓ˃ᜂ6ၠၔӝ೭ÔाᘈᎰعફźඨᄔ᫊ᬷचᦳਖ਼ᆫॏᢉ֤ᚺҝໜᑕღ៕ኞ\n⏻◢⦩ⴿⴭ⩐⼧⻓⿗ⰴⓔ⎮♴₂ⲅ➰╢⦞⯊⣺⛙►⫷⟲⦌⼚℗™ⓧ⃝┷⁍Ⲏ⥠⠗⎋Ω⿇≕⍗Ⅷ⣍⦶⭗⣉⎨⃺⋁⮇⥒⸟ⴔⳟ➗₮⒵ⷽ⭍⋽⻱⋬⛺⪝☃ⱽ⸗⁮⅝⃟▹⦆♖⮴⻢⼎⪵☯░⣷␡⭮⹬⨗⼀⼟⋨⠂∄Ⲛⳅ└⸥☉⼺⧑Ⳝ╵⸇⓰≀\n⼋⾆⢺⡰⭐ⓗ⨤✬⭯⦆⹠≩ⲕ◐⎙♥⤏⨣⏧◓⛐⣑⽙▘⏯⑥⾧ⴱ✱⒪⢏⡄⫹ⱶ⾘⪣∃╽‟Ⳃⱗ⽚⸠⋻ⷯ⸅╯⊻⫹⥙⛅⬞Ⲫⵃ⊩⥪⇻⅕⠩⵸⨀⦗⫊⴯ⶍ⎐✟⎳⊄⢺▥ⶀ⬵⾁⡈⃀⽨⇐⾣⠣⨚⁴⯆⊌⣹⇛╼⹋⬾⃒✽⚩⼞ⴘⶢⴆ⑝⭾⸐⬊",
	"ሓ͈՚᜶੺᭹ќ๶ᬳ߹ס৘൮ကٖٟ5ņҔ֌˫ጬ҄ጨ̭ჶĆᔁҤࡆዲࡤᏔ෎ݖᜤឝૌધᇮ൯ຒอዽᔥʣཱྀᢡ๣ಅ૏ǌᣅਭဨᅘഇᨆဈǙዀᑘ૧ܲᅹ֔༌ԙ᪞Ŏမ൉ഐłᔸ᤭ቅᆡᒇኝੈᐞᝊѬ࿾ᎼٳʌឋӔࣰ੷᠀ຘӲÐቼގ¡ঔҍ\n⌮ⲋ⵻▞ⱷ❰⢍⛣ↆ≰⛇⮘╚ⴞ⠵⎆⠓ℬ⇋⍗⢱│⑂⩴✫⌏⛑⌊⹚∢┮⭪⨱⹯⚑╄ⴔⰲⲼ♥⑶⛤ⷲ⵺Ⓧⵏ⵼☧⫯≇⵰⧠Ⳟ⹃⑴␇ℶ⩨⇹┗⍃⧓ⰼ◿⟲⚌⠳Ⱔⴠ⩥⩗⎙⟏ⷦ➦⍓ⲳ⣜␂⩺➹⪋⹛⼰•⣓▉⋴⁂ⱚ€➮⣉⑰ⱥ⏧⛛⏟↍♁\nⰋ⦙☠⨙⭑✮Ⲇ⦬ⲅⷸ╛⥷✦⮌⭏ⵜ⡉╌Ⅴ⪳⡃⓲⟈ⶰⓁ░⯎▕⥚◞Ⓩ⍍⹘℧⏃⟜⇞␿ⵟ⿃↽ℨ⼊⮘ⵝ⛥✘⸹₣⊑◙⬪⳽⼀⤾⛔⟻⼿⳦⸋⨇⑛⸌┚⦼Ɱ≠⩺⛦⽃⊗⬈⤉ℝ⟮◹⵾⧏⣨▩⡏ⴒ⾷⺲┡⤈⤖Ⱕ⓭◾⮟⣪╄◪⨢⍓₅⅑⎭⥻",
	"᫪όܔᄸeಛ๰ྣҘᔤ༫ඣᜒᔇӐਉ᭘ઙሎਗ਼န͕༛ፆᕄଷᣆഅ൩ឝᗮʫᜅਜሶལ՜࡬༁፞ᔬึ̞ࣛ᪥āؕĀ೨ϓᇞᒏࡈᦄ״๳ᚥཔሺᑿΙબᦵĦᘶч჈ᬲᆍᬬ๪Ꭳ᜚λಧᡏᑬዋࢗEૅӓႿזǃڄҠࡓᒐᔁჟលᗀଈᔮ๔᧸ឦ׶\nⱯ⣇⼍⴯⩕⌬ⵚ⦾◴⿷⢈⭗⥏⥡⊘⚲⥤ⵁ⬐⪳⯚ⷁ⾌⫆ⵣ⸼∤⻅ⓒ❅⠑╄ⵞ⅁⒑ⴥ⻐⓲⡝≦⮂▕Ⳕ⍿⧆Ⓝ⮜⭝⁔␲☫☨▣⵰⠶✧⢬⬯⬸⋩⼕⁦⫫⦥ⰿ␖≝⒕ⳅⰹ⠞‟Ⓓ ⁬⪡ⁱ⋃⸠⦝⛉⶛⿃⛍ⲹⶶ⥠′ⰴ⦬⪗⃚⽁⹙⎆⨒⇊ⵀ⟰⃐\n⺝⬃⮊⣺✁ⲧ℻⏦⋥ⵚⶠⱋⷎ↸⍚⁌⨤‴⢠▋ⲽ₅ⴆ⁍⛮⥩⹮⯊ⴠ⡅Ⲓ⣲⇈⣤⪍☁⌋⒘⸧⻪↔⟗⋼◻₮⩎⣝⥝✙⨆➢♤Ⱖ␗ⴺ⿍⭉≢➔≘⤿╪✏⎣╅⟍⤝⸏€⨖➞⩭⒩⬡♫⚬⎜⵬⁘ℜⱚ⁘⪁⟒–ⶭ⁐⫵⩓⑆≖ⓘ⬷ⱔ⌊⪊❞⦫⎩⺀",
	"᪓ᘑ᥁ᆪɸܝᢋদᣘ౅ᅕઃེʹ´ᒪ۴᎚ᗃఏෆረᬋ᥽ᝡȫ᚞ᐓ࠭«ᡮዘጁᔩᖢᑪᣳᎼᆂଆᜡగᏸˬۦᙈʼܙԊҮӥ૑ేᔶᕶᇤᐞৣ༻ۿၯኮᗳݡߠኈසឺ؁፤ᖑ̋࿧ᆿᦹೆឯຶᤏછ෴࡮̕Ţኵነཇጧၠథ΁໢ബ᥺ã୕ᤱ଒\n≦⶙⢷△␕ⓘ⿯∼Ⲫ⧏⠍⛖⏱⏩⟉⤟Ȿ⩋▍₳⑅⾳␕Ⓨ␅⪺⎪⍥⪞♫⺴⋋⚫⊯➒⪬Ⓛ⛗⭫⋍⴬ℎ⠧⪛⿬⭛⠁⌓⋊⣋␌␀Ɑ⣟⨀⺱⎩⠖⏯⋇⺺⡄⁜┮⒌⣐⧃⹛ⷂ⓺⃵⻡⟒⾖⚌…⤪⦨➔ⴋ⽌⎇⣣ⷶ⁇⅋∉⹠⛙╵⺜⥝ⲧ⏑⹴⹏₆⭁₥⣰\n⦠⮹●Ⳟⷍ♼❿☍⢌┣⳧⯛⌍⑿ⷛ⟭⪬ⴑ⋟₧⊀ⅷ≚⌭ⰲ☘ⱏ☪⃳⚆↲Ⱇ⋰⛚␂⏘ⷼⓔ➣␙⊊➪ⷐⅯ▀⦋⪳Ⰼⶳ⢊⠴ⓚ⩠⸕⭌⒲⽆⃲∡➞Ⓧ╱⏇⤋⅙Ⓟ℘⣯⃻⿥⁓╝⺵⎘‾␃‎⃽ₜ⍱⽨⋩⠋⬨ⱡ⟃⫹⛆⵿⤎✑Ⓧ⧤ⵏ⽢⮷⚳⤺⥖⻤",
	"଱эಯᅥҷܭ᪪ນ֯ᆟᕴஊᑋካᏯດᤴ൮ྮഝˆႝǭ༇ঠಸ᧩˅ࡹഎᅲபᐓתధ௳ယȵ௛˼ఝȫʍ᥄ၪƎƐᩱᦧ᎖ᠯউༀ୹௿ٚంᔪχႏУဦ፠ᑔ໯࿘á᤮4ᬆࡽ៥ᚵஸǳეᖩ༶᠏ᗉSड஽Դ෿ጧ᧛฀ᥪᣍ฽᛻੐਷ǬLᜏᧆ᫷෶\n◁⚪≹⧗⾨❴⁃ⴺ⟡⪥⚀ⴰ⭭ⴾ⺢⎶℺⸌⎳⚷⸢⡺⃆⭡⇿⟚⾥⠈⊱╱␹☤ⵞⴈ⏌①⾻Ⱬ⌲⦾➰↡⬉⦾⤴⿟⑁⪐⚼⦺⑙⚗⇄⻌⎬⦬ₛ⭊⌠ↆ➅⋟✿ⷠ⽚⮹❩⍙⩟Ⅷ⫌⬠⒅⭁❧⧋⟾➶⿥⥴⁕⯱⫅⮺➗♣⩐⑐⪟⣱⠂✜⁻ⵜⱥ⨭Ⰶ☬│⃏\n⋁ⶊⒷⵃ⏴❥⬩➁Ⰱ②␿⋮⠌┚ⳉ⁬⼾⇄☇⤄ℨⵛ≨┦⅐⽧Ⲵ⊳↢➏⃤⧯⁺␓⻒⻌╾⻺⥀⮄⊾⓽←⃩⧰ⴣ◩∓ⓧ↟✵⵳⧱⹢⛜⸵ⶾⴳⷆ⟼┪➁⮑⺏⩉Ⱏ⊪⌆⦯⵰⶜⒱⛾⋗☕⇂⚞⮀␒⑬⯾┠⶞⪂┴⍊Ⅼ≉⃋√⧶☾ⴜ⪈♰ⶠ⻤—ⴠ⃨",
	"ᣇ߰࡭ႁ̕ᧅܶᩫ᫰᧻˗៤჈ջආ໎ᠳတᖩۏᦡങࣣ໧ᡇ፯զฐхӏʵ՜ᚗሎᙑ௺ǡᗼᒬϥ୓԰ֲ̂ᕋᙾᆓ፯ᜥየሾᄲᄬ୎Ĥୡ֚᧡ៀှᤛᖬȽ៚ԕቭ൷Ùཉˁʧ̩ᙽᐴᖝȟߊਈณԼᘛɰ৿้ॾࠆΰќףٻӺᖘ๮ܢ؄фึᠧ˦޳\n⑛Ⲯ♼ⴐ└⣴♪′⢠ⴏ⢩⑥≕✭⦣⽅⠿◟ⳉℷ⦺⼹☝⠿ⲥ⳯⮡⋧⮇⮯⪤␰≠┎⋆⟙⬑Ⅼ⢲⋂➪⨄⬿⽤⇚✳⡏⤉⟈⋑➖⚉␢ⶮ③⥐⺘₱⅂ⓑ▉ⶭ⊇✽≻⳩ⶫ✫⁊⛔⪉⍢⫏⋾♴⃓⌊⇣⫅⿾⏼█▐⃘⛬₢♝ℑ♅⩧ⵗ⠝ ⦤⬍〉⼑♓‘⊲\n⪯ⲿ⃙⾶⭩Ⓤ⅖⇲╞⇞⒎⣠⟅⟗⑮❤“⾹⍷⦄⺐⿇⫇➤⏚⃘⳦⵵⌼⺐⺹⻮⋮⇇☸⨕⇯⚀⤘ⰾⓁⱝ⾁⽭⛔⁉ₚ⊍⛺⢏ⷭKⴔ⚉⋒≗⪯ⴚ⬴⇟⯨⋩⠠⃼∉⻶ⲎⱤ⨦⭌ⵈ♸⼆⋙➾∻⩃Ⓜ⯚⛈⽐❥⒝▴┙⢿◲⪲⪹⛬ℏ┎ⴿⵚ✎⼖⑬✝⎄⪲",
	"ᨸᖐᜅႼᬊŞՠፁAછᕠ࢝ງ֨໾ކۇව፧ᕧŁ᭨ᡪಏᩭ᭨຾౳ᗳऐ๊ᭃᦨᄫ໷ശཡሌၗᏞ༶Ɩξෛ༷ઑࢗဢᚍ኿ᢍቲࠁ᫵ᚄᐳך๭۽᪔஢ǂ૰ᙕఱঈ؅ག๝ᙺਖ਼᪏Ŗढ፳ၞX᭰᧭ዏდ௩ํǰᗂࡾᐢᜮ᥏ȣෳЈ࠱ᔸᎥഋ\n⭻⛌⼳₞⸼ⷑ⬋ ⠫⯃⋏⤅⃹❝⊲⿠♜Ⓘ↑ⶖ↍↲☪␛⍖⪊⨼⑖⃯➪⃆ⳏ⬊⧦⌱⮶⛫⹊ℎ‛⎥⋐⑁⋜⣰‷⾋⍹ⱱⱉ⎕┮⛤⺙⭲⦳⩋⅜␾␗⋒⊤⪛⪐⩓ⲃ⨑⮍ⱘ⣞⮺⻐⸦⅐⨂≛⎒ↁ⥭ⶇ⭏❤ℐ⽺⠸◌➯Ⱅ ⁣⃊⭛⹁⟂₉⣠ⱋⱱ⿾⥣\n⣺⁊‧ⶡ⌈⁝→□❱⤥⫦∢⯶ⵋ⵾ⴻⓔ▌Ⳁ⻍⹵≉⯪☚⭎⻸⚰⃟♮☏➢◳┏⼹≷⒮⣱⬀⯮⏠ⷐ⬧⬐⊊⊻➓⒩┭⺵⻂⟱⎏ⱬ⠿⌆₣⢵Ⓥ⍿≐≌⟱⑔ⴃ❝ⱍ⑿⑾ⷤ₩⥉ⰢⱩ₼⼵⊲⾛⸑⵲☸ⶣⵚ◍∊⨼⥤⇿⺭⍑┫ⴋ╢ⷑ⭰⫟▟⊟⎘⁬⿼",
	"ၥ૩᪮ᙣᘋǱৱᨄᠭᭂᙕᤣ׫ଭ࠶ୂᦾᅓ࿻ᨦХËĭᬤᇟᎶቍϝ࣭ᅶᘀᗓᓰ˷˄ᒶம9ᦝདሉޢಝ৏᭓ᆪǱᆚᩰ྘จӤᇧᥚᓾड೏᧾๡᩶፛ᩕǠ৷෠ɾᔮယ෺ࠫᤝᇰഡຄោೕˈѹ᫄ਉుᥪᥬŬుᒩ෷೅Εᨦଷዷ৤ࡐཐᩂƛඈ૝\n⊁┰⣣⁭⠥⯚⦐⤐⊖Ⓕ⎣╜ℽ⼣⤸⟩⩜⧤⿐∦⒐⎽⥯Ⳃ⨾⛨⼈Ɫ⽮✗⎞⩻⾘Ⳃ⿻╍⌛⍴⬀⾋┓⏦⍘⑙⎺➢⭯⦸⼟⑉⡲⿧⟚♄⮻⒲⬩⚲⺏⛤Ⰱ⟅⚮⯊⹍⻬◶ⱬ⇋⛔∏⦻⠃⡾Ⅶ⋫∍✻ ⏚⢏⌝⣚⪆┋⿣⵮⠜⳪╄♄⨝⒝ⵯ⨖ⶠⓕ★⾺\nⓃ₾⤳⢈⬚◼Ⱍ⪉⯌Ⱚ♽ℹ⤨‸ℚ⪲⚭ⶢ⿕✑⚍Ⱪ↡‱≾⨬⍄Ⱌ◉⌷⠃⋅⨦⃱⧁ⱸ⍕⥇⣧ⱑ∤⨞⛧ⵘ∼≔⟮⟰⨦⪼†⪵⣚ⳚⰟↅ⌛ⅲ☁⋃ⅴ⨚↬⃸ₜ☼ⓖⅦ⻸ⷕⅧ‰⯀⣏ℳⷆ⤘♹⚉⿂ⓡ⬳Ⓓ⛺⡒␡⪆ⶅ♜⚷⮹⤪⍵↽•⼽⏢ⳑ⪯⤤"
};

int main(void) {

start:

	int page = 0, option = 0;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("You opened the book.");
	Sleep(2000);
	system("cls");

	while (true) {
		if (page < 0) {
			page += PAGE_MAX;
		}
		else if (page > PAGE_MAX) {
			page = 0;
		}

		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("P.%d\n\n", page+1);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		printf("%s", book[page]);

		option = _getch();

		if (option == ESC) {
			system("cls");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			printf("You closed the book.");
			goto close;
			
		}
		else {
			option = _getch();
			switch (option) {
			case LEFT_KEY:
				page--;
				break;

			case RIGHT_KEY:
				page++;
				break;

			default:
				break;
			}
		}
	}

close:
	while (true) {
		char input = 0;
		scanf_s("%c", &input, 1);
		if (input == '\n') {
			system("cls");
			goto start;
		}
	}

}