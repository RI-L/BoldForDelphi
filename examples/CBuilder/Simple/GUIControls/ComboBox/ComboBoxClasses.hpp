/*****************************************/
/*      This file is autogenerated       */
/*   Any manual changes will be LOST!    */
/*****************************************/
/* Generated 2001-12-05 11:40:13         */
/*****************************************/
/* This file should be stored in the     */
/* same directory as the form/datamodule */
/* with the corresponding model          */
/*****************************************/
/* Copyright notice:                     */
/*                                       */
/*****************************************/

#if !defined (ComboBoxClasses_HPP)
#define ComboBoxClasses_HPP

// interface uses

// interface dependancies

// attribute dependancies
#include "BoldAttributes.hpp"

#include <Classes.hpp>
#include <Controls.hpp>
#include <SysUtils.hpp>
#include "BoldDefs.hpp"
#include "BoldSubscription.hpp"
#include "BoldDeriver.hpp"
#include "BoldElements.hpp"
#include "BoldDomainElement.hpp"
#include "BoldSystemRT.hpp"
#include "BoldSystem.hpp"

void unregisterCode();

// forward declarations of all classes }

class TBusinessClassesRoot;
class TBusinessClassesRootList;
class TFood;
class TFoodList;
class TPerson;
class TPersonList;
class TSchool;
class TSchoolList;

class DELPHICLASS TBusinessClassesRoot;
class TBusinessClassesRoot : public Boldsystem::TBoldObject
{
typedef Boldsystem::TBoldObject inherited;
private:
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TBusinessClassesRoot(Boldsystem::TBoldSystem* aBoldSystem) : Boldsystem::TBoldObject(aBoldSystem, true) { }
  #pragma option pop

};

class DELPHICLASS TFood;
class TFood : public TBusinessClassesRoot
{
typedef TBusinessClassesRoot inherited;
private:
  TBAString* __fastcall _Get_M_Name();
  String __fastcall _GetName();
  void __fastcall _SetName(String NewValue);
  TPersonList* __fastcall _GetIsFavouredBy();
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TFood(Boldsystem::TBoldSystem* aBoldSystem) : TBusinessClassesRoot(aBoldSystem) { }
  #pragma option pop

  __property TBAString* M_Name = {read=_Get_M_Name};
  __property TPersonList* M_IsFavouredBy = {read=_GetIsFavouredBy};
  __property String Name = {read=_GetName, write=_SetName};
  __property TPersonList* IsFavouredBy = {read=_GetIsFavouredBy};
};

class DELPHICLASS TPerson;
class TPerson : public TBusinessClassesRoot
{
typedef TBusinessClassesRoot inherited;
private:
  TBAString* __fastcall _Get_M_Name();
  String __fastcall _GetName();
  void __fastcall _SetName(String NewValue);
  TBAString* __fastcall _Get_M_AttendsSchool();
  String __fastcall _GetAttendsSchool();
  void __fastcall _SetAttendsSchool(String NewValue);
  TBAString* __fastcall _Get_M_Major();
  String __fastcall _GetMajor();
  void __fastcall _SetMajor(String NewValue);
  TBAString* __fastcall _Get_M_FavouriteMusic();
  String __fastcall _GetFavouriteMusic();
  void __fastcall _SetFavouriteMusic(String NewValue);
  TFood* __fastcall _GetPreferredFood();
  TBoldObjectReference* __fastcall _Get_M_PreferredFood();
  void __fastcall _SetPreferredFood(TFood *value);
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TPerson(Boldsystem::TBoldSystem* aBoldSystem) : TBusinessClassesRoot(aBoldSystem) { }
  #pragma option pop

  void __fastcall CompleteCreate(void);
  __property TBAString* M_Name = {read=_Get_M_Name};
  __property TBAString* M_AttendsSchool = {read=_Get_M_AttendsSchool};
  __property TBAString* M_Major = {read=_Get_M_Major};
  __property TBAString* M_FavouriteMusic = {read=_Get_M_FavouriteMusic};
  __property TBoldObjectReference* M_PreferredFood = {read=_Get_M_PreferredFood};
  __property String Name = {read=_GetName, write=_SetName};
  __property String AttendsSchool = {read=_GetAttendsSchool, write=_SetAttendsSchool};
  __property String Major = {read=_GetMajor, write=_SetMajor};
  __property String FavouriteMusic = {read=_GetFavouriteMusic, write=_SetFavouriteMusic};
  __property TFood* PreferredFood = {read=_GetPreferredFood, write=_SetPreferredFood};
};

class DELPHICLASS TSchool;
class TSchool : public TBusinessClassesRoot
{
typedef TBusinessClassesRoot inherited;
private:
  TBAString* __fastcall _Get_M_Name();
  String __fastcall _GetName();
  void __fastcall _SetName(String NewValue);
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TSchool(Boldsystem::TBoldSystem* aBoldSystem) : TBusinessClassesRoot(aBoldSystem) { }
  #pragma option pop

  __property TBAString* M_Name = {read=_Get_M_Name};
  __property String Name = {read=_GetName, write=_SetName};
};

class DELPHICLASS TBusinessClassesRootList;
class TBusinessClassesRootList : public TBoldObjectList
{
protected:
  TBusinessClassesRoot* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TBusinessClassesRoot *NewObject);
public:
  int __fastcall Includes(TBusinessClassesRoot *anObject);
  int __fastcall IndexOf(TBusinessClassesRoot *anObject);
  void __fastcall Add(TBusinessClassesRoot *NewObject);
  TBusinessClassesRoot* __fastcall AddNew();
  void __fastcall Insert(int index, TBusinessClassesRoot *NewObject);
  __property TBusinessClassesRoot* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};

class DELPHICLASS TFoodList;
class TFoodList : public TBusinessClassesRootList
{
protected:
  TFood* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TFood *NewObject);
public:
  int __fastcall Includes(TFood *anObject);
  int __fastcall IndexOf(TFood *anObject);
  void __fastcall Add(TFood *NewObject);
  TFood* __fastcall AddNew();
  void __fastcall Insert(int index, TFood *NewObject);
  __property TFood* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};

class DELPHICLASS TPersonList;
class TPersonList : public TBusinessClassesRootList
{
protected:
  TPerson* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TPerson *NewObject);
public:
  int __fastcall Includes(TPerson *anObject);
  int __fastcall IndexOf(TPerson *anObject);
  void __fastcall Add(TPerson *NewObject);
  TPerson* __fastcall AddNew();
  void __fastcall Insert(int index, TPerson *NewObject);
  __property TPerson* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};

class DELPHICLASS TSchoolList;
class TSchoolList : public TBusinessClassesRootList
{
protected:
  TSchool* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TSchool *NewObject);
public:
  int __fastcall Includes(TSchool *anObject);
  int __fastcall IndexOf(TSchool *anObject);
  void __fastcall Add(TSchool *NewObject);
  TSchool* __fastcall AddNew();
  void __fastcall Insert(int index, TSchool *NewObject);
  __property TSchool* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};


char* GeneratedCodeCRC();

#endif
 