class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int i=0,j=0;
        string ans="";
        while(i<word1.size()&&j<word2.size()){
            if(i==j){
                    ans+=word1[i];
                i+=1;
            }else{
                ans+=word2[j];
                j+=1;
            }
            
            
        }
        while(i<word1.size()){
            ans+=word1[i];
            i+=1;
        }
        while(j<word2.size()){
            ans+=word2[j];
            j+=1;
        }
        return ans;
    
        
        
        }   
        
        
        
        
        
        
    //     int l1=word1.size(),l2=word2.size(),i=0,j=0  ;
    //     string s="";
    //     while(i<l1&&j<l2){
    //         if(i==j){
    //             s+=word1[i];
    //             i++;
    //         }else{
    //             s+=word2[j];
    //             j++;
    //         }
    //     }
    //     while (i<l1){
    //         s+=word1[i];
    //         i++;
    //     }while(j<l2){
    //         s+=word2[j];
    //         j++;
    //     }
    //     return s;
    // }
};