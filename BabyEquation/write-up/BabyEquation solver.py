from z3 import*

f = [BitVec('f1%i'%i,8) for i in range(0,44)]

s = Solver()


s.add(f[0]>32)
s.add(f[0]<126)
s.add(f[1]>32)
s.add(f[1]<126)

#func1 ~ func10
s.add(f[34]-f[37]-f[25]^f[36]-f[11]^f[22]-f[5]+f[0]==-189)
s.add(f[39]+f[12]-f[7]+f[15]+f[18]^f[42]-f[21]+f[40]-f[15]-f[38]^f[39]==-337)
s.add(f[21]+f[27]+f[20]+f[9]^f[19]^f[17]-f[34]-f[28]-f[42]-f[32]-f[30]==-17)
s.add(f[8]-f[7]+f[19]-f[31]+f[7]-f[41]==-22)
s.add(f[22]+f[38]+f[37]^f[16]^f[16]+f[32]+f[18]-f[31]==108)
s.add(f[43]^f[26]+f[27]-f[8]+f[0]^f[31]-f[24]==-165)
s.add(f[43]+f[19]-f[3]-f[31]-f[39]+f[24]+f[22]+f[13]+f[16]+f[36]-f[37]==186)
s.add(f[5]-f[15]^f[12]-f[13]+f[7]+f[28]-f[36]^f[42]+f[22]==60)
s.add(f[13]+f[32]-f[35]-f[17]+f[0]^f[2]==23)
s.add(f[38]-f[3]-f[37]-f[37]-f[1]+f[16]==-186)

#func11 ~ func20
s.add(f[16]+f[27]^f[27]-f[0]-f[38]^f[37]-f[9]+f[42]+f[32]==-165)
s.add(f[22]+f[33]+f[30]^f[7]^f[1]^f[29]+f[8]-f[38]==345)
s.add(f[13]+f[9]-f[32]+f[36]+f[9]+f[39]==319)
s.add(f[34]-f[15]-f[18]+f[41]-f[18]-f[2]==-120)
s.add(f[19]-f[19]-f[12]-f[2]-f[10]+f[43]+f[23]-f[5]-f[6]==-456)
s.add(f[23]-f[22]+f[34]-f[32]^f[25]-f[15]==5)
s.add(f[39]-f[13]^f[42]+f[36]+f[40]+f[17]+f[17]^f[33]+f[0]==-364)
s.add(f[16]-f[16]+f[2]+f[9]-f[28]^f[29]+f[25]==215)
s.add(f[36]^f[4]-f[15]+f[14]+f[32]-f[16]-f[28]==-23)
s.add(f[25]^f[22]+f[27]-f[12]-f[15]+f[0]==-75)

#func21 ~ func30
s.add(f[42]+f[15]-f[27]-f[4]+f[8]-f[27]+f[39]+f[13]==221)
s.add(f[8]+f[2]-f[0]-f[17]+f[9]-f[32]+f[20]==85)
s.add(f[5]+f[31]+f[43]+f[10]+f[5]+f[14]-f[11]^f[42]+f[19]-f[28]==320)
s.add(f[34]-f[26]^f[21]^f[8]+f[40]+f[8]+f[3]-f[34]==-355)
s.add(f[20]+f[3]+f[10]+f[10]+f[20]+f[13]-f[2]==498)
s.add(f[13]+f[20]+f[5]+f[7]-f[10]^f[2]^f[24]+f[0]-f[42]-f[42]-f[33]==-331)
s.add(f[5]+f[37]+f[18]-f[28]+f[37]-f[32]^f[15]+f[7]+f[29]+f[32]+f[8]==279)
s.add(f[38]+f[26]-f[5]+f[43]+f[17]+f[14]-f[40]-f[2]+f[7]+f[42]==105)
s.add(f[38]-f[11]+f[39]+f[4]^f[30]-f[13]+f[41]==240)
s.add(f[1]-f[36]-f[22]+f[42]+f[8]+f[26]+f[5]+f[34]==316)

#func31 ~ func40
s.add(f[2]^f[38]+f[41]+f[35]-f[31]-f[23]+f[33]^f[28]==260)
s.add(f[36]-f[33]^f[13]+f[13]-f[7]+f[0]-f[1]==-183)
s.add(f[1]^f[4]+f[39]-f[5]+f[8]+f[20]-f[13]-f[15]==-37)
s.add(f[21]^f[11]-f[25]-f[33]+f[10]-f[41]-f[0]-f[42]+f[29]==-129)
s.add(f[23]-f[8]-f[13]+f[20]+f[2]+f[29]-f[36]==148)
s.add(f[27]-f[38]+f[35]+f[30]+f[2]+f[9]+f[34]^f[8]-f[10]-f[39]==-410)
s.add(f[9]-f[38]^f[16]-f[23]-f[1]-f[31]+f[8]==-28)
s.add(f[25]-f[43]+f[3]+f[43]+f[32]-f[18]+f[40]+f[13]+f[30]==561)
s.add(f[1]^f[17]+f[10]-f[4]+f[27]-f[13]-f[8]-f[31]-f[8]-f[5]^f[10]==-171)
s.add(f[26]-f[19]+f[42]+f[4]-f[27]-f[21]-f[43]==34)

#func41 ~ func50
s.add(f[37]-f[18]-f[36]-f[20]-f[41]-f[11]+f[20]==-232)
s.add(f[42]+f[6]+f[40]-f[31]^f[27]-f[23]^f[33]^f[15]==-218)
s.add(f[32]-f[42]-f[7]+f[29]-f[11]+f[43]+f[21]^f[34]-f[20]==-128)
s.add(f[13]^f[20]+f[21]^f[41]-f[12]-f[2]+f[24]-f[39]^f[42]-f[40]-f[6]==49)
s.add(f[40]-f[11]+f[15]+f[22]-f[14]-f[41]+f[7]+f[2]+f[30]+f[18]+f[34]==388)
s.add(f[41]+f[38]+f[37]+f[28]-f[39]-f[22]+f[4]+f[28]==488)
s.add(f[21]+f[11]-f[17]+f[30]+f[43]+f[38]-f[10]+f[10]+f[32]-f[1]==327)
s.add(f[38]+f[7]-f[17]+f[0]+f[11]-f[4]-f[12]==57)
s.add(f[21]+f[18]+f[16]-f[7]-f[34]-f[10]+f[24]+f[31]==120)
s.add(f[31]-f[12]+f[16]+f[10]+f[0]+f[29]-f[19]+f[7]-f[18]-f[24]^f[40]==149)

s.check()
m = s.model()

for j in range (0,44):
    print(chr(int(str(m[f[j]]))), end='')