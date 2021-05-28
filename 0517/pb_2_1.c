int main(){
    float *fptr;
    int *iptr;
    float fvalue;
    int ivalue;
    ivalue = 200;
    fvalue=  314.72;
    iptr = &ivalue;
    fptr = &fvalue;

    *fptr = *fptr - 300.0;
    *iptr = *iptr + 300;
    return 0;
}