#include "Audio_book.h"
Audio_Book *Audiolist;
User_Node *User_List;
int main()
{
	CreateAudio_Book();
	Create_User_List();

	/*   Welcome to LIBRARY       */
	printf(" We have the  following Functions available with us\n ");
	printf("1.Add Audio Book to  Library\n");
	printf("2.Edit Audio Book  in the  Library\n");
	printf("3.Delete Audio Book from Library\n");
	printf("4.Add Audio Book to User  Library\n");
	printf("5.Add User \n");
	printf("6.Search Audio Book in the Library\n");
	printf("7.Display Listening Progress of User\n");
	printf("8.Display User Library\n");
	printf("9.Allow Users to Rate Audio Book\n");
	printf("10. Display Most Popular Audio Book\n");
	printf("11.Display User History \n");
	printf("12.Display Audio Book Listenig time\n");
	printf("13.Display user List\n");
	printf("14. Display Audio books in the Library\n");
	printf("15.Merge User Libraries\n");

	int n;

	int t = 1;
	while (t != 0)
	{
		printf("Enter the option you Want \n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			add_AudioBook(&Audiolist);
		case 2:
			Edit_AudioBook(&Audiolist);
		case 3:
			Delete_AudioBook(&Audiolist, &User_List);
		case 4:
			Add_to_User_Library(&User_List, &Audiolist);
		case 5:
			Add_User_profile(&User_List);
		case 6:
			Search_Audio_Book(&Audiolist);
		case 7:
			Add_Listening_Progress(&User_List);
		case 8:
			Display_User_Libraries(&User_List);
		case 9:
			Rate_Audio_Book(&User_List, &Audiolist);
		case 10:
			Most_poplular_Audio_book(&Audiolist);
		case 11:
			Listening_history_report_user(&User_List);
		case 12:
			Listening_History_Audio_book( &User_List,&Audiolist);
		case 13:
			print_User_List(User_List);
		case 14:
			print_Audio_Book(Audiolist);
		case 15:
			Merge_user_libraries(&User_List);
		Default:
			printf("Please choose one of the option");
		}
		printf("If you want to Exit enter 0 \n");
		scanf("%d", &t);
	}
	printf(" Exitting...\n");
     printf("If you Want These changes to be include in the  Input File enter 0 \n");
	 scanf("%d",&t);
	 if(t==0)
	 {
		Create_output_file();
	 }
	return 0;
}
