class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size();
        int i = 0, j = n - 1;

        // skip cars that will never collide
        while (i < n && directions[i] == 'L') i++;
        while (j >= 0 && directions[j] == 'R') j--;

        int collisions = 0;
        for (int k = i; k <= j; k++) {
            if (directions[k] != 'S') collisions++;
        }
        return collisions;
    }
};
















// class Solution {
// public:
//     int countCollisions(string directions) {
        
//         stack<char> st;
//         int c =0;
//         for(int i =0;i<directions.size();i++)
//         {
//             if(directions[i]=='L')
//             {
//                 if(st.empty()) continue;
//                 if(st.top()=='R') 
//                 {
//                     c+=2;
//                     st.pop();
//                     st.push('S');
//                 }
//                 else if(st.top() == 'S') c+=1;
//             }
//             else if(directions[i]=='R')
//             {
//                 if(!st.empty()) st.pop();
//                 st.push('R');
//             }
//             else
//             {
                
//                 if(!st.empty() && st.top()=='R')
//                 {
//                     c+=1;
//                     st.pop();
//                     st.push('S');
//                 }
//             }
//         }
//         return c;
//     }
// };


// // if stack empty and l and no prob 
// // if s and r come add to stack
// // if s amd l come make it s +1
// // if r and l come make it s and +2;