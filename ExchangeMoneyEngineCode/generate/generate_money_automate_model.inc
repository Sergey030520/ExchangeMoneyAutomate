/*  ------------------------------------------------------
     Routine name:  generate_money_automate_model
     Description:   
     Project file:  generate_exchange_money_automate.prt

------------------------------------------------------  */

/*       Local stack variables                */
int i;
int j;
int c;
int itmp1;
int itmp2;
int itmp3;
double tmp1;
double tmp2;
double tmp3;
double tmp4;
double tmp5;
double tmp6;
double tmp7;
char f;
char tmp_f_1;
char u_s;
char u_r;
ret = 0;

switch (action){
case f_Stop:{
/* Index=1
   UID=1
   GeneratorClassName=TLanguage
   Name=LangBlock22
   Type=язык программировани€ */

generate_money_automate_modelv1_sfinal__0:
;
};break;
case f_GetDeri:{
};break;
case f_GetAlgFun:{
};break;
default:{

/* Index=0
   UID=0
   GeneratorClassName=TInputPin
   Name=Const_source19
   Type=¬ходной контакт */

state_vars->generate_money_automate_modelv0_out_0_ = ((input_0));

/* Index=1
   UID=1
   GeneratorClassName=TLanguage
   Name=LangBlock22
   Type=язык программировани€ */

symbol = (enum InputSymbols)state_vars->generate_money_automate_modelv0_out_0_;
state_vars->generate_money_automate_modelv1_out_0_ = exchange_money(&engine, symbol);
/* Index=1
   UID=1
   GeneratorClassName=TLanguage
   Name=LangBlock22
   Type=язык программировани€ */

l_start_generate_money_automate_modelv1:;
generate_money_automate_modelv1___0:
;

/* Index=2
   UID=2
   GeneratorClassName=TOutPin
   Name=OutPin16
   Type=¬ыходной контакт */

if(isfinite(state_vars->generate_money_automate_modelv1_out_0_)){
out_0 = state_vars->generate_money_automate_modelv1_out_0_;
};
};break;
};
