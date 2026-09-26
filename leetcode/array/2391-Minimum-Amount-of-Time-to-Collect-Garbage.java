class Solution {
    public int garbageCollection(String[] garbage, int[] travel) {

int p=0;

int m=0;

int g=0;
int lm=0;
int lp=0;
int lg=0;

for(int i=0;i<garbage.length;i++)
{

for(int j=0;j<garbage[i].length();j++)
{

if(garbage[i].charAt(j)=='M'){
m++;
lm=i;}
else if(garbage[i].charAt(j)=='P'){
p++;
lp=i;
}

else if(garbage[i].charAt(j)=='G'){
g++;
lg=i;

}

}


}
int tp=0;
int tg=0;

int tm=0;

int time = m+p+g;
for(int i=0;i<lm;i++)
tm=tm+travel[i];
for(int i=0;i<lp;i++)
tp=tp+travel[i];
for(int i=0;i<lg;i++)
tg=tg+travel[i];

int tt = tp+tm+tg;

return tt+time;
        
    }
}