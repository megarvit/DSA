// //single element potential celeb verify
//             int candidate = s.top();
//             bool rowCheck = false;
//             int zeroCount = 0;
            
//             for(int i=0;i<n;i++){
//                 if(M[candidate][i] == 0){
//                     zeroCount++;
//                 }
//             }
            
//             //all zeroes
//             if(zeroCount == n){
//                 rowCheck = true;
//             }
            
            
//             bool colCheck = false;
//             int oneCount = 0;
            
//             for(int i=0;i<n;i++){
//                 if(M[i][candidate] == 1){
//                     oneCount++;
//                 }
//             }
            
//             if(oneCount == n-1){
//                 colCheck = true;
//             }
            
//             if(rowCheck == true && colCheck == true){
//                 return candidate;
//             }
//             else{
//                 return -1;
//             }