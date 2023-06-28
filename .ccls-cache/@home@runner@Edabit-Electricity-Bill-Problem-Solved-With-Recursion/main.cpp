double electricityBill(double units) {
	if(units<=100){return 15+ (double)((int)(100*((1.1*units+.009))))/100 ;}
	else if (units<=200){return (double)((int)(100*(1.1*2*(units-100)+.009)))/100+electricityBill(100);}
	else if (units<=300){return (double)((int)(100*(1.1*3*(units-200)+.009)))/100+electricityBill(200);}
	else if (units<=500){return (double)((int)(100*(1.1*4*(units-300)+.005)))/100+electricityBill(300);}
	else {return (double)((int)(100*(1.1*5*(units-500))+.005))/100 + electricityBill(500);}
}