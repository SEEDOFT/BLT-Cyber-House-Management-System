#ifndef _____THEA_____
#define _____THEA_____
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include"../Kunthea_Design/kuntheaDesign.h"
#include"../Kunthea_Design/DeleteDesign.h"
#include"../Kunthea_Design/DeleteGame.h"
#include"../Kunthea_Design/FoodMenuForm.h"
#include"../Kunthea_Design/GameInputDesign.h"
#include"../Kunthea_Design/GameMenuForm.h"
#include"../Kunthea_Design/InputDesign.h"
#include"../Kunthea_Design/Invoice.h"
#include"../Kunthea_Design/ManagUserInfo.h"
#include"../Kunthea_Design/SearchDesign.h"
#include"../Kunthea_Design/SearchGameDesign.h"
#include"../Kunthea_Design/UpdateDesign.h"
#include"../Kunthea_Design/UpdateGameDesign.h"
#include"../Kunthea_Design/UserSignUp.h"
#include"../Kunthea_Design/ViewDesign.h"
#include"../Kunthea_Design/ViewGameList.h"
#include"../Kunthea_Design/ViewUserInfoDesign.h"
#include"../Kunthea_Design/DeleteUserInfo.h"
#include"../Kunthea_Design/SortDesign.h"
#include"../Kunthea_Design/UpdateUserInfo.h"
#include"../Kunthea_Design/BuyFood&drink.h"
#include"../Kunthea_Design/CalculateIncome.h"
#include"../Kunthea_Design/BuyHour.h"
#include"../Kunthea_Design/AllInvoicesAndIncome.h"
#include"../Kunthea_Design/ViewProfile.h"
#include"../Kunthea_Design/ViewAllUserInvoice.h"
#include"../Kunthea_Design/SearchUserInfo.h"
#include"../Kunthea_Design/ExitDesign.h"
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
namespace BLT
{
    class B: 

    public FoodMenu, public DeleteDesign, public GameInputDesign, public ViewGameListDesign, 
    public ViewDesign, public UpdateDesign, public UpdateGameDesign, public GameMenu, 
    public SearchGameDesign, public SearchDesign, public InputDesign, public Invoice, 
    public ManageUserInfo, public DeleteGameDesign,public UserSignUp, public ViewUserInfoDesign, 
    public DeleteUserInfo, public SortUserDesign, public UpdateUserInfo, public CalculateIncome,
    public BuyFoodnDrink, public BuyHour, public AllInvoice, public ViewProfile, public ViewAllUserInvoice,
    public SearchUser, public ExitDesign
    {
        public:
    };
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif
