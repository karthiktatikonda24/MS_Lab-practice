#include<stdio.h>
int main(void)
{
  float basefare;
  scanf("%f",&basefare);
  float Res_charge= 0.05*basefare;
  float Sup_charge= 0.15*basefare;
  float total_fare = basefare+Res_charge+Sup_charge;
  float Gst = (0.05*total_fare);
  float final_amt = total_fare+Gst;
  printf("Reservation Charge: %.2f\n",Res_charge);
  printf("Superfast Charge: %.2f\n",Sup_charge);
  printf("Total fare: %.2f\n",total_fare);
  printf("GST: %.2f\n",Gst);
  printf("Final Payable Amount: %.2f\n",final_amt);
}