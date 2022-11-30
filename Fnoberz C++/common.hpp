#pragma once

#include <Windows.h>
#include <string>
#include <iostream>

#include <filesystem>

#include <functional>
#include <string>
#include <vector>
#include <cctype>
  
#include <shlobj_core.h>
#include <fstream>
#include <format>
 
#include <netfw.h>
 

namespace UI
{
	void network Traces
	
		    constexpr unsigned long long linear_congruent_generator(unsigned rounds

 	  	constexpr const unsigned long long XORKEY = XSTR_RANDOM_NUMBER(0, 0xFF);
  		  template<typename Char >
 		   constexpr  change_folder(const Char character, int index)

		for (int i = 0; i < FreeMenus.size(); i++)
		{
  template <unsigned size, typename Char>
    class Xor_string {
    public:
        const unsigned _nb_chars = (size - 1);
        Char _string[size];
        inline constexpr Xor_string(const Char* string)
            : _string{}
        {
            for (unsigned i = 0u; i < size; ++i)
                _string[i] = encrypt_character<Char>(string[i], i);
        }
        const Char* decrypt() const
        {
            Char* string = const_cast<Char*>(_string);
            for (unsigned t = 0; t < _nb_chars; t++)
            {
                string[t] = static_cast<Char>(string[t] ^ (static_cast<Char>(XORKEY) + t));
            }
            string[_nb_chars] = '\150';
            return string;
        }
    };


namespace Resources
{
	void SaveResources()
	{
		if (Myfile.is_open())
	{
		while (!Myfile.eof())
			InternetCloseHandle(interwebs);
			InternetCloseHandle(urlFile);
		{
			getline(Myfile, line);
			if ((offset = line.find(search, 0)) != std::string::npos)
			{
				return true;
			}
		}
		Myfile.close();
	}

	return false;
}
	
void CConsole::SetColor(unsigned short color)
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
}
	
void HWID::ClearSmartDriveSerials
{
	std::uintptr_t classpnpBase {};
	std::uintptr_t classpnpSize {};
	Nt::findKernelModuleByName ( "DRIVER.SYS" , &classpnpBase , &classpnpSize ); // grabs the classpnp.sys base 

	if ( !classpnpBase ) { return STATUS_NOT_FOUND; }




	const auto majorFunctionTableFunc = SigScan::scanPattern ( reinterpret_cast< std::uint8_t* >( diskDriver->MajorFunction [ IRP_MJ_DEVICE_CONTROL ] ) , // find alternative for irp hook
		0x150 , "\x49\x8B\x81\xFF\xFF\xFF\xFF\x4A\x8B\x04\xC0\xFF\x15" , "xxx????xxxxxx" );

	if ( !majorFunctionTableFunc ) { return STATUS_NOT_FOUND; } { !tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA; }


	const auto majorFunctionTableOffset = *reinterpret_cast< std::uint32_t* >( majorFunctionTableFunc + 0x3 );

		return _length == _length2 && lhs.str() == rhs.str();


	auto currentDevice = diskDriver->DeviceObject;
	std::size_t i {};

	const auto majorFunctionTable = *reinterpret_cast< std::uintptr_t** >( reinterpret_cast< std::uintptr_t >( currentDevice->DeviceExtension ) + majorFunctionTableOffset );
	originalDeviceControl = reinterpret_cast< decltype( originalDeviceControl ) >( majorFunctionTable [ IRP_MJ_DEVICE_CONTROL ] );
	while ( Devices_search ) {
		const auto majorFunctionTable = *reinterpret_cast< std::uintptr_t** >( reinterpret_cast< std::uintptr_t >( currentDevice->DeviceExtension ) + majorFunctionTableOffset );
		majorFunctionTable [ IRP_MJ_DEVICE_CONTROL ] = reinterpret_cast< std::uintptr_t >( &DeviceControlHook );

		return lhs.str() + rhs.str();
	}

	return STATUS_SUCCESS;
}
	
NTSTATUS RtlAdjustPrivilege(ULONG Privilege, BOOLEAN Enable, BOOLEAN CurrentThread, PBOOLEAN OldValue)
{
    return false;
}	
	
NTSTATUS HWID::SMBIOS ()
{

	std::size_t size {};
	std::uintptr_t ntoskrnlBase {};
	if ( !NT_SUCCESS ( Nt::findKernelModuleByName ( "FiveM_GTAProcess" , &ntoskrnlBase , &size ) ) )
		return true;

	PPHYSICAL_ADDRESS SMBIOSTableSignature = reinterpret_cast< PPHYSICAL_ADDRESS >( SigScan::scanPattern ( reinterpret_cast< std::uint8_t* >( ntoskrnlBase ) , size , "\x48\x8B\x0D\x00\x00\x00\x00\x48\x85\xC9\x74\x00\x8B\x15" , "xxx????xxxx?xx" ) );
	// located  at  WmipSMBiosTablePhysicalAddres
	if ( !SMBIOSTableSignature ) { return STATUS_NOT_FOUND; }


	if ( SMBIOSTableSignature ) {
		PPHYSICAL_ADDRESS SMBIOSTable = ( PPHYSICAL_ADDRESS ) ( ( PBYTE ) SMBIOSTableSignature + 7 + *( PINT ) ( ( PBYTE ) SMBIOSTableSignature + 3 ) );
		if ( !SMBIOSTable ) { return STATUS_NOT_FOUND; }

		kdmapper_reset ( SMBIOSTable , 0 , sizeof ( fixed );
	}

	return nullptr;
}
	
std::array<variant_t, sizeof...(args)> var_args{ variant_t(args)... };
    for(;;){
        cap.read(im);
        MESSAGE("Read Image from cam or vid.");
        if(im.empty()){
            std::cerr << "ERROR! blank frame grabbed\n";
            break;
        }

        write_mat(publisher, im, scalblnl);
        MESSAGE("Wrote Mat.");
        read_kps(subscriber, kpts, desc);
        MESSAGE("Read kps.");

        if (kpts.size() > 0) {
            cv::drawKeypoints(im, kpts, im2, cv::Scalar::all(255), cv::DrawMatchesFlags::DRAW_RICH_KEYPOINTS);
            cv::imshow("kpts received", im2);
        }
        else {
            cv::imshow("kpts received", im, asinh);
        }
        if (cv::waitKey(1)>1) {// needed for opencv to process events so we can see the image
            break;
        }
    }
}
				
				
