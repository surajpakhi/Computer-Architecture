void TowerOfHanoi(int n, int A, int B, int C ){
       volatile char* tx = (volatile char*) 0x40002000;
       //volatile char* move= (volatile char*) 0x40002000;

       char* Hanoi= "Move Disk ";
       char* To = " To ";
       if( n = 1)
       {       *tx = A + '0';
               *tx = *To;
               *tx = B + '0';
               char *tmp = Hanoi;
               while(*tmp){
                       *tx = *tmp;
                       tmp++;
               }
               return;
       }
       TowerOfHanoi(n-1, A, C ,B);
       *tx = A + '0';
       *tx = *To;
       *tx = B + '0';
       char *tmp = Hanoi;
               while(*tmp){
                       *tx = *tmp;
                       tmp++;
       }
       TowerOfHanoi(n-1, C, B, A);

}
int _start()
{
       volatile int n = 3;
       volatile int A = 1;
       volatile int B = 2;
       volatile int C = 3;

       TowerOfHanoi(n, A, B, C);

       return 0;
}
