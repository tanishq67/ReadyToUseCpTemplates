



---------------------------- Traverse Dp Diagonally
// i denotes the traversal in the vertical direction, while j is the horizontol
// to traverse, digonally, 
// (0,0) -> (1,1)...         || step2: (0,1) -> (1,2)....
// (i) changes every time in each step, 
// now j dont need to chnage just follow
// for(int j = 0 ; j < n ; j++)
//    for(int i = 0 ; i + j < n ; i++)
//       dp[i][i + j]

// vertical toh hamesha 0 se start hoga, but horizontal jiska refernec badlega
