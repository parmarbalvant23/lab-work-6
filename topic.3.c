#include<stdio.h>

main()
{
	int lenguagechoice,servicechoice;
	
	printf("press  1 for english\n");
	printf("press 2 for hindi\n");
	printf("press 3 for gujarati\n");
	printf("enter your choice ");
	scanf("%d",&lenguagechoice);
	switch(lenguagechoice)
      {
      	case 1 :
      		   printf("press 1 for internet recharge\n");
      		   printf("press 2 for top-up recharge\n");
      		   printf("press 3 for special recharge\n");
      		   printf("enter your choice\n");
      		   scanf("%d",&servicechoice);
	          switch(servicechoice)
	          {
	          	case 1 :
	          		   printf("you are succsesfully done a internet recharge\n");
	          		   break;
	          	case 2 :
	          		   printf("you are succsesfully done a top-up recharge\n");
	          		   break;
	          	case 3 :
	          		   printf("you are succsesfully done a special recharge\n");
	          		   break;
			       default :
			       	     printf("enter velide choice");
			  }
			break;
			
		case 2 :
			printf("internet recharge ke liye 1 dabaye\n");
			printf("top-up recharge ke liye 2 dabaye\n");
			printf("special recharge keliye 3 dabaye\n");
			printf("enter your choice");
			scanf("%d",&servicechoice);
			switch(servicechoice)
			{
				case 1 :
					   printf("aapne safalatapurvak internet recharge karliya he\n");
					   break;
				case 2 :
					   printf("aapne safalatapurvak top-up recharge karliya he\n");
					   break;
				case 3 :
				       printf("aapne safalatapurvak special recharge karliya he\n");
					   break;
					default :
					     printf("amany pasandgi");		
			}
			break;
			
        case 3 : 
               printf("internet recharge mate 1 dabavo\n");
               printf("top-up recharge mate 2 dabavo\n");
               printf("special recharge mate 3 dabavo\n");
               printf("enter your choice");
               scanf("%d",&servicechoice);
               switch(servicechoice)
               
            {
            	case 1 :
            		   printf("tame safalatapurvak internet recharge karyu chhe");
            		   break;
                case 2 :
                	   printf("tame safalatapurvak top-up recharge karyu chhe");
                	   break;
                case 3 : 
                       printf("tame safalatapurvak special recharge karyu chhe");
                       break;
                    default :
                    	  printf("amany pasandgi");
			}
	       break;
	
        }
	
}
