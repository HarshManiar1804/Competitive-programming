for _ in range(int(input())):
    n,m=map(int,input().split())
    s=input()
    negx,negy=0,0
    posx,posy=0,0
    prevx,prevy=0,0
    ansx,ansy=1,1
    for i in range(len(s)):
        if s[i]=='L':
            prevx-=1 
        elif s[i]=='R':
            prevx+=1
        elif s[i]=='U':
            prevy-=1
        else:
            prevy+=1
        negx=min(negx,prevx)
        negy=min(negy,prevy)
        posx=max(posx,prevx)
        posy=max(posy,prevy)
        rx=posx-negx 
        ry=posy-negy
        if rx>=m or ry>=n:
            break
        ansx=1-negx
        ansy=1-negy
    print(ansy,ansx) 
 
 
 