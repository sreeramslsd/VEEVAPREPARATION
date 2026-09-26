class Solution {
    public int garbageCollection(String[] garbage, int[] travel) {

        int paper = 0;
        int glass = 0;
        int metal = 0;

        int lastP = -1;
        int lastG = -1;
        int lastM = -1;

        for(int i=0;i<garbage.length;i++)
        {
            for(int j=0;j<garbage[i].length();j++)
            {
                if(garbage[i].charAt(j)=='M')
                {
                    metal++;
                    lastM = i;
                }
                else if(garbage[i].charAt(j)=='P')
                {
                    paper++;
                    lastP = i;
                }
                else if(garbage[i].charAt(j)=='G')
                {
                    glass++;
                    lastG = i;
                }
            }
        }

        int time = paper + glass + metal;

        int travelP = 0;
        int travelG = 0;
        int travelM = 0;

        for(int i=0;i<lastP;i++)
            travelP += travel[i];

        for(int i=0;i<lastG;i++)
            travelG += travel[i];

        for(int i=0;i<lastM;i++)
            travelM += travel[i];

        time = time + travelP + travelG + travelM;

        return time;
    }
}