//#####LSU4.9
//#####Lambda = 1,0...2,0

int L_slope[13] = { 15 , 16 , 18 , 20 , 24 , 26 , 29 , 30 , 35 , 38 , 42 , 45 , 48};
int L_offset[13] = {  3 , 2 , -1 , -8 , -21 , -27 , -42 , -50 , -77 , -97 , -118 , -140 , -164};


   if ( Ua_corr < 0 ) {
      A = 0
      B = 1
   }

   if ( Ua_corr >= 0 && Ua_corr < 40 ) {
      A = L_slope[0];
      B = L_offset[0];
   else if ( Ua_corr >= 40 && Ua_corr < 60 ) {
      A = L_slope[1];
      B = L_offset[1];
   else if ( Ua_corr >= 60 && Ua_corr < 80 ) {
      A = L_slope[2];
      B = L_offset[2];
   else if ( Ua_corr >= 80 && Ua_corr < 110 ) {
      A = L_slope[3];
      B = L_offset[3];
   else if ( Ua_corr >= 110 && Ua_corr < 130 ) {
      A = L_slope[4];
      B = L_offset[4];
   else if ( Ua_corr >= 130 && Ua_corr < 150 ) {
      A = L_slope[5];
      B = L_offset[5];
   else if ( Ua_corr >= 150 && Ua_corr < 160 ) {
      A = L_slope[6];
      B = L_offset[6];
   else if ( Ua_corr >= 160 && Ua_corr < 180 ) {
      A = L_slope[7];
      B = L_offset[7];
   else if ( Ua_corr >= 180 && Ua_corr < 200 ) {
      A = L_slope[8];
      B = L_offset[8];
   else if ( Ua_corr >= 200 && Ua_corr < 210 ) {
      A = L_slope[9];
      B = L_offset[9];
   else if ( Ua_corr >= 210 && Ua_corr < 220 ) {
      A = L_slope[10];
      B = L_offset[10];
   else if ( Ua_corr >= 220 && Ua_corr < 240 ) {
      A = L_slope[11];
      B = L_offset[11];
   else if ( Ua_corr > 240 ) {
      A = L_slope[12];
      B = L_offset[12];
   }