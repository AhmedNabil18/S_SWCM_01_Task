First Change in File
--------- Main Branch ---------
void LedOn()
{
	dio_write(pin0, 0xff);
}

void LedOff()
{
	dio_write(pin0, 0x00);
}
------------- Led Funtion -------------
uint8_t switchRead()
{
	return dio_read(pin1);
}
--------- Switch Branch ---------
