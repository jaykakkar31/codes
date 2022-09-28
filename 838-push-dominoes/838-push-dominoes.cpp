class Solution {
public:
    string pushDominoes(string dominoes) {
     int j=0;
        for(int i=1;i<dominoes.length();i++)
        {

            if(dominoes[i] =='.' && dominoes[j] =='R')
            {
                // do nothing
            }
            else if(dominoes[i] =='.' && dominoes[j] =='.')
            {
                // do nothing
            }
            else if(dominoes[i] =='L' && dominoes[j] =='.')
            {
                fill(dominoes.begin()+j, dominoes.begin()+j+(i-j), 'L');
                j=i;
            }
            else if(dominoes[i] =='L' && dominoes[j] =='R')
            {
                if(i-j>2) // R.L=R.L//R..L = RRLL   // R...L=RR.LL
                {
                    int len = (i-j-1);
                    fill(dominoes.begin()+j+1, dominoes.begin()+j+(len/2)+1, 'R');

                    if(len%2==0)
                        j=j+(len/2)+1;
                    else
                        j=j+(len/2)+1+1;
                    fill(dominoes.begin()+j, dominoes.begin()+i, 'L');
                }

                j=i;
            }
            else if(dominoes[i] =='R' && dominoes[j] =='R' && j!=(i-1) )
            {
                fill(dominoes.begin()+j+1, dominoes.begin()+i, 'R');
                j=i;
            }
            else
            {
                j=i;
            }
        }

        if(j!=dominoes.length())
        {
            if(dominoes[j]=='R' && dominoes[dominoes.length()-1]=='.')
            {
                fill(dominoes.begin()+j+1, dominoes.end(), 'R');
            }
        }

        return dominoes;
    }
};