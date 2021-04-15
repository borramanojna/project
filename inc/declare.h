struct customers
{
	char name[30];
	char phone[20];
	int seat;
};

void book(int *,int,int,int,struct customers []);
int option(void);
void movie1(int choice,char name[10],int cost);
void movie2(int choice,char name[10],int cost);
int choose(void);
void logs(int,struct customers []);
void test_details(void);

