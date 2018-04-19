#include <stdio.h>
#include <math.h>
#include "include/mathhelpers.h"
int main(){
    int Romeo = 2;
    int Juliet = 2;
    int Ophelia = 1;
    int Hamlet = 1;

    act1:{
        goto act_1_scene1;
    }

    act_1_scene1:{
        Romeo = -64 ;
        Romeo = (8 - Romeo) ;
        fprintf(stdout, "%c", (char)Romeo);
        Romeo = (-128 + 32) ;
        Romeo = ((4 + 1) - Romeo) ;
        fprintf(stdout, "%c", (char)Romeo);
        Romeo = (Romeo + (8 - 1)) ;
        fprintf(stdout, "%c", (char)Romeo);
        fprintf(stdout, "%c", (char)Romeo);

        goto act_1_scene2;
    }

    act_1_scene2:{
        Juliet = ((Romeo + 1) + 2) ;
        fprintf(stdout, "%c", (char)Juliet);

        goto act_1_scene3;
    }

    act_1_scene3:{
        Ophelia = (4 * 8) ;
        fprintf(stdout, "%c", (char)Ophelia);
        Ophelia = (8 * (1 + 2)) ;
        Ophelia = (Juliet - Ophelia) ;
        fprintf(stdout, "%c", (char)Ophelia);

        goto act2;
    }

    act2:{
        goto act_2_scene1;
    }

    act_2_scene1:{
        fprintf(stdout, "%c", (char)Juliet);
        Juliet = (Juliet + (4 - 1)) ;
        fprintf(stdout, "%c", (char)Juliet);
        fprintf(stdout, "%c", (char)Romeo);
        Romeo = Hamlet ;
        Romeo = (square((2 - -4)) - cube(-4)) ;
        fprintf(stdout, "%c", (char)Romeo);

        goto act_2_scene2;
    }

    act_2_scene2:{
        Ophelia = (Romeo / (4 + -1)) ;
        fprintf(stdout, "%c", (char)Ophelia);
        Juliet = (Romeo / twice((1 - -4))) ;
        fprintf(stdout, "%c", (char)Juliet);
    }
}
