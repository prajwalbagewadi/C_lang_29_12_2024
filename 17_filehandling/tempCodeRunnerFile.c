FILE *fptr1 = fopen("file.txt","w");
    char istr1[20]="fputsoperation";
    fputs(istr1,fptr1);
    fclose(fptr1);