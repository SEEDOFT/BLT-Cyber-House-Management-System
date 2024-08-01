#ifndef _____THEAFFF_____
#define _____THEAFFF_____
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"../All_Design.h"
#include"../DeleteDesign.h"
#include"../DeleteGame.h"
#include"../FoodMenuForm.h"
#include"../GameInputDesign.h"
#include"../GameMenuForm.h"
#include"../InputDesign.h"
#include"../Invoice.h"
#include"../ManagUserInfo.h"
#include"../SearchDesign.h"
#include"../SearchGameDesign.h"
#include"../UpdateDesign.h"
#include"../UpdateGameDesign.h"
#include"../UserSignUp.h"
#include"../ViewDesign.h"
#include"../ViewGameList.h"
#include"../ViewUserInfoDesign.h"
#include"../DeleteUserInfo.h"
#include"../UpdateUserInfo.h"
#include"../BuyFood&drink.h"
#include"../CalculateIncome.h"
#include"../BuyHour.h"
#include"../AllInvoicesAndIncome.h"
#include"../ViewProfile.h"
#include"../ViewAllUserInvoice.h"
#include"../SearchUserInfo.h"
#include"../ExitDesign.h"
#include"../UserOption.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
namespace BLT
{
    class B: 

    public FoodMenu, public DeleteDesign, public GameInputDesign, public ViewGameListDesign, 
    public ViewDesign, public UpdateDesign, public UpdateGameDesign, public GameMenu, 
    public SearchGameDesign, public SearchDesign, public InputDesign, public Invoice, 
    public ManageUserInfo, public DeleteGameDesign,public UserSignUp, public ViewUserInfoDesign, 
    public DeleteUserInfo, public UpdateUserInfo, public CalculateIncome,
    public BuyFoodnDrink, public BuyHour, public AllInvoice, public ViewProfile, public ViewAllUserInvoice,
    public SearchUser, public ExitDesign, public LENG
    {
        public:
    };
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif
