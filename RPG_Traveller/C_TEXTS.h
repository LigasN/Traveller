#pragma once

/////////////////////////////////////////////////////////////////////////////
/// HEADERS
/////////////////////////////////////////////////////////////////////////////
#include <string>
#include "TXT_Handle.h"
#include <memory>
#include <vector>


class C_TEXTS
{
private:

	///////////////////////////////////////////////////////////////////////////////////////////////
	///
	/// Variable with all texts from file.
	/// Defined in constructor.
	/// Way to use:	TEXTS(C_TEXTS::TEXT_ID::chosen_text_id)
	/// Example:		std::cout << TEXTS(C_TEXTS::TEXT_ID::chosen_text_id) << std::endl;
	///
	///////////////////////////////////////////////////////////////////////////////////////////////
	std::vector <std::wstring> TEXTS;

	////////////////////////////////////////////////////////////////////////////////////////////
	///
	/// Smart pointer named HandlePtr to TXT_Handle to handle with files
	///
	////////////////////////////////////////////////////////////////////////////////////////////
	using HandlePtr = std::shared_ptr<TXT_Handle>;

	////////////////////////////////////////////////////////////////////////////////////////////
	///
	/// TXT_Handle smart pointer to object which handle with languages of texts
	///
	////////////////////////////////////////////////////////////////////////////////////////////
	HandlePtr TEXTS_Update;

public:

	///////////////////////////////////////////////////////////////////////////////////////////////
	///
	/// Enum with names of texts
	/// Way to use:	C_TEXTS::TEXT_ID::chosen_text_id
	/// Example:		std::cout << TEXTS(C_TEXTS::TEXT_ID::chosen_text_id) << std::endl;
	///
	///////////////////////////////////////////////////////////////////////////////////////////////
	enum class TEXT_ID
	{
		Error,
		Greeting,
		Choosing_options,
		Menu_options,
		Thanks_fP,
		Nick,
		Byron_name,
		Location_Name,
		WhatNow_choice1,
		Enum_Dance,
		LostGame,
		WinFight,
		Hitting,
		Location_Name1,
		Location_Name2,
		Location_Name3,
		Location_Name4,
		nothing_there,
		Road,
		Road1,
		Road2,
		Road3,
		Road4,
		Road5,
		Road6,
		First_moments_ending,
		First_moments_traveling,
		empty,
		added_trove,
		overloadedTrove,
		overloadedTrove2,
		NotImplementedException,
		staty_show,
		show_HP,
		show_strength,
		show_stamina,
		show_respect,
		show_persuasion_power,
		show_backpack_capacity,
		show_your_troves,
		show_item_type,
		show_item_type_sword,
		show_item_DMG,
		show_item_amount,
		show_item_strength,
		show_item_value,
		show_item_maxAmount
	};

	///////////////////////////////////////////////////////////////////////////////////////////////
	///
	/// Default constructor which have choosing language and reading file operations
	///
	///////////////////////////////////////////////////////////////////////////////////////////////
	C_TEXTS();

	///////////////////////////////////////////////////////////////////////////////////////////////
	///
	/// Function in C_TEXTS class
	///
	/// Aim: Update language of C_TEXTS class
	///
	/// Way: -Use Handle-Body design pattern which handle files with texts in different languages
	///	 	 -Update texts in TEXTS tab
	///
	/// Returns: Boolean true if success, false if not
	///
	///////////////////////////////////////////////////////////////////////////////////////////////
	bool langugeUpdate(int language);

	///////////////////////////////////////////////////////////////////////////////////////////////
	///
	/// Function in C_TEXTS class
	///
	/// Aim: Wite requested text on console
	///
	/// Way: -Use iostream and wstring text matrix saved in TEXTS variable
	///
	/// Returns: Boolean true if success, false if not
	///
	///////////////////////////////////////////////////////////////////////////////////////////////
	bool writeText(TEXT_ID text);


};