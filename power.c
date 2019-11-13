
double e=2.71828;
 double Pow(double x,int y){
     if(y<0){
        double z=y*-1;
        return 1/Pow(x,z);
     }
       if(y==1) return x;
            return x*Pow(x,y-1);
   }
double Exp(int x){
    return Pow(e,x);
}


  