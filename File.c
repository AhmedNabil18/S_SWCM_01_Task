First Change in File
------------- Master File -------------
void LedOn()
{
	dio_write(pin0, 0xff);
}

void LedOff()
{
	dio_write(pin0, 0x00);
}
------------- Led Funtion -------------