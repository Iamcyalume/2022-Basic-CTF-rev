#include <allegro.h>

#ifdef _WIN32
#include <synchapi.h>
#include <conio.h>
#endif

int main(void)
{
	allegro_init();

	BITMAP *sc2;

    install_keyboard();

	set_gfx_mode(GFX_AUTODETECT, 320, 200, 0, 0);

	sc2 = create_bitmap(screen->w, screen->h); //Set up double buffer

    set_palette(desktop_palette);
    clear_to_color(screen, makecol(255, 255, 255));    

	while (!key[KEY_ESC]) {

		clear_bitmap(sc2);
		textout_centre_ex(sc2, font, "BCTF{th1S_prO9ram_cAN_B_ruN_IN_DOSmOdE}", SCREEN_W / 2, SCREEN_H / 2, makecol(0, 0, 0), -1);

		blit(sc2, screen, 0, 0, 0, 0, screen->w, screen->h);

		rest(1);
	}	
	
    return 0;
}

END_OF_MAIN()
