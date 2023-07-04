#include<stdio.h>

int main()
{
   int po;
   //concave mirror
   printf("Press 1  if the object is at infinity in concave mirror\n");
   printf("Press 2  if the object is beyond the center of curvature in concave mirror\n");
   printf("Press 3  if the object is at center of curvature in concave mirror\n");
   printf("Press 4  if the object is between C and F in concave mirror\n");
   printf("Press 5  if the object is at focus F in concave mirror\n\n");
   
   //convex mirror
   printf("Press 6  if the object is at infinity in convex mirror\n");
   printf("Press 7  if the object is between infinity and pole of the mirror in convex mirror\n\n");
   
   //concave lens 
   printf("Press 8  if the object is at infinity in concave lens\n");
   printf("Press 9  if the object is between infinity and optical center in concave lens\n\n");
   
   //convex lens
   printf("Press 10 if the object is at infinity in convex lens\n");
   printf("Press 11 if the object is beyond the center of curvature in convex lens\n");
   printf("Press 12 if the object is between center of curvature and focus convex lens\n");
   printf("Press 13 if the object is at focus\n");
   printf("Press 14 if the object is at center of curvature\n");
   printf("Press 15 if the object is between focus and optical center\n");
   
   
   scanf("%d",&po);
    
   if(po==1){
    printf("POSITION-at the focus F\tSIZE-Highly Diminished\tNATURE OF IMAGE-Real and Inverted\n");
}
   else if(po==2){
    printf("POSITION-between F and C\tSIZE-Diminished\tNATURE OF IMAGE-Real and Inverted\n");
 }
   else if(po==3){
    printf("POSITION-at C\tSIZE-Same Size\tNATURE OF IMAGE-Real and Inverted\n");
}
   else if(po==4){
    printf("POSITION-beyond C\tSIZE-Enlarged\tNATURE OF IMAGE-Real and Inverted\n");
}
   else if(po==5){
    printf("POSITION-at infinity\tSIZE-Highly Enlarged\tNATURE OF IMAGE-Real and Inverted\n"); 
}
   else if(po==6){
    printf("POSITION-at the focus F, behind the mirror\tSIZE-Highly Diminished\tNATURE OF IMAGE-Virtual and erect\n");
}
   else if(po==7){
    printf("POSITION-between pole and focus F\tSIZE-Diminished\tNATURE OF IMAGE-Virtual and erect\n");
}
   else if(po==8){
    printf("POSITION-at the focus F\tSIZE-Highly Diminished\tNATURE OF IMAGE-Virtual and erect\n");
}
   else if(po==9){   
    printf("POSITION-between F and optical center\tSIZE-Diminished\tNATURE OF IMAGE-Virtual and erect\n"); 
}
   else if(po==10){
    printf("POSITION-at focus\tSIZE-Diminished\tNATURE OF IMAGE-Real and Inverted\n");
}
   else if(po==11){
       printf("POSITION-between center of curvature and focus\tSIZE-Diminished\tNATURE OF IMAGE-Real and Inverted\n");
}
   else if(po==12){
       printf("POSITION-beyond center of curvature\tSIZE-Enlarged\tNATURE OF IMAGE-Real and Inverted\n");   
}
   else if(po==13){
       printf("POSITION-at infinity, behind the mirror\tSIZE-Enlarged\tNATURE OF IMAGE-Real and inverted\n");
}
   else if(po==14){
       printf("POSITION-at center of curvature\tSIZE-Same size\tNATURE OF IMAGE-Real and erect\n");
   }
   else if(po==15){
       printf("POSITION-on same side as object\tSIZE-Enlarged\tNATURE OF IMAGE-Virtual and erect\n");
   }
   else{
       printf("Invalid entry");
}
   return 0;
}


