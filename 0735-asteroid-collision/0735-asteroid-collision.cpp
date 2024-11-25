class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        vector <int> st;
        
        for(int x:asteroids)
        {
            if(x>0)
            {
                st.push_back(x);
            }

            else
            {
                while(!st.empty() && st.back()>0 && st.back() < -x )
                {
                    st.pop_back();
                }

                if(!st.empty() && st.back()== -x )
                {
                    st.pop_back();
                    
                }
                else if(st.empty() || st.back()<0)
                {   
                    st.push_back(x);
                }
            }
        }


        return st;
        
        
    }
};