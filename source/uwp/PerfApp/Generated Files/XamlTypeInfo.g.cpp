﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "pch.h"
#include "XamlTypeInfo.g.h"

#include "App.xaml.h"
#include "MainPage.xaml.h"
#include "XamlBindingInfo.g.hpp"
#include "App.g.hpp"
#include "MainPage.g.hpp"

template<typename T>
::Platform::Object^ ActivateType()
{
    return ref new T;
}

template<typename TInstance, typename TItem>
void CollectionAdd(::Platform::Object^ instance, ::Platform::Object^ item)
{
    safe_cast<TInstance^>(instance)->Append((TItem)item);
}

template<typename TInstance, typename TKey, typename TItem>
void DictionaryAdd(::Platform::Object^ instance, ::Platform::Object^ key, ::Platform::Object^ item)
{
    safe_cast<TInstance^>(instance)->Insert((TKey)key, (TItem)item);
}

template<typename T>
::Platform::Object^ FromStringConverter(::XamlTypeInfo::InfoProvider::XamlUserType^ userType, ::Platform::String^ input)
{
    return ref new ::Platform::Box<T>((T)userType->CreateEnumUIntFromString(input));
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_AverageTextBlockTicks(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->AverageTextBlockTicks);
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_TotalTextBlockTicks(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->TotalTextBlockTicks);
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_TotalRenderTicks(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->TotalRenderTicks);
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_CurrentRenderIteration(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->CurrentRenderIteration);
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_CurrentParseIteration(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->CurrentParseIteration);
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_MaxParseTicks(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->MaxParseTicks);
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_MaxRenderTicks(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->MaxRenderTicks);
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_ParsePercentage(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->ParsePercentage);
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_RenderPercentage(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->RenderPercentage);
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_AverageParseTicks(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->AverageParseTicks);
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_AverageRenderTicks(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->AverageRenderTicks);
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_CurrentFile(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->CurrentFile;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_MaxRenderFile(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->MaxRenderFile;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_MaxParseFile(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->MaxParseFile;
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_CurrentFile(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->CurrentFile = safe_cast<TValue^>(value);
}

enum TypeInfo_Flags
{
    TypeInfo_Flags_None                 = 0x00,
    TypeInfo_Flags_IsLocalType          = 0x01,
    TypeInfo_Flags_IsSystemType         = 0x02,
    TypeInfo_Flags_IsReturnTypeStub     = 0x04,
    TypeInfo_Flags_IsBindable           = 0x08,
    TypeInfo_Flags_IsMarkupExtension    = 0x10, 
};

struct TypeInfo
{
    PCWSTR  typeName;
    PCWSTR contentPropertyName;
    ::Platform::Object^ (*activator)();
    void (*collectionAdd)(::Platform::Object^, ::Platform::Object^);
    void (*dictionaryAdd)(::Platform::Object^, ::Platform::Object^, ::Platform::Object^);
    ::Platform::Object^ (*fromStringConverter)(::XamlTypeInfo::InfoProvider::XamlUserType^, ::Platform::String^);
    int     baseTypeIndex;
    int     firstMemberIndex;
    int     firstEnumValueIndex;
    int     createFromStringIndex;
    ::Windows::UI::Xaml::Interop::TypeKind kindofType;
    unsigned int flags;
};

const TypeInfo TypeInfos[] = 
{
    //   0
    L"String", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    //   1
    L"Object", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    //   2
    L"UInt64", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    //   3
    L"UInt32", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    //   4
    L"PerfApp.MainPage", L"",
    &ActivateType<::PerfApp::MainPage>, nullptr, nullptr, nullptr,
    6, // Windows.UI.Xaml.Controls.Page
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_None,
    //   5
    L"PerfApp.MainPageViewModel", L"",
    &ActivateType<::PerfApp::MainPageViewModel>, nullptr, nullptr, nullptr,
    1, // Object
    1, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_IsBindable | TypeInfo_Flags_None,
    //   6
    L"Windows.UI.Xaml.Controls.Page", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    15, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    //   7
    L"Windows.UI.Xaml.Controls.UserControl", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    15, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    //  Last type here is for padding
    L"", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1, 
    15, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_None,
};

const UINT TypeInfoLookup[] = { 
      0,   //   0
      0,   //   1
      0,   //   2
      0,   //   3
      0,   //   4
      0,   //   5
      0,   //   6
      4,   //   7
      4,   //   8
      4,   //   9
      4,   //  10
      4,   //  11
      4,   //  12
      4,   //  13
      4,   //  14
      4,   //  15
      4,   //  16
      5,   //  17
      5,   //  18
      5,   //  19
      5,   //  20
      5,   //  21
      5,   //  22
      5,   //  23
      5,   //  24
      5,   //  25
      6,   //  26
      6,   //  27
      6,   //  28
      6,   //  29
      7,   //  30
      7,   //  31
      7,   //  32
      7,   //  33
      7,   //  34
      7,   //  35
      7,   //  36
      8,   //  37
};

struct MemberInfo 
{
    PCWSTR shortName;
    ::Platform::Object^ (*getter)(::Platform::Object^);
    void (*setter)(::Platform::Object^, ::Platform::Object^);
    int typeIndex;
    int targetTypeIndex;
    bool isReadOnly;
    bool isDependencyProperty;
    bool isAttachable;
};

const MemberInfo MemberInfos[] = 
{
    //   0 - PerfApp.MainPage.CurrentFile
    L"CurrentFile",
    &GetReferenceTypeMember_CurrentFile<::PerfApp::MainPage>,
    &SetReferenceTypeMember_CurrentFile<::PerfApp::MainPage, ::Platform::String>,
    0, // String
    -1,
    false, false, false,
    //   1 - PerfApp.MainPageViewModel.AverageTextBlockTicks
    L"AverageTextBlockTicks",
    &GetValueTypeMember_AverageTextBlockTicks<::PerfApp::MainPageViewModel, ::default::uint64>,
    nullptr,
    2, // UInt64
    -1,
    true,  false, false,
    //   2 - PerfApp.MainPageViewModel.TotalTextBlockTicks
    L"TotalTextBlockTicks",
    &GetValueTypeMember_TotalTextBlockTicks<::PerfApp::MainPageViewModel, ::default::uint64>,
    nullptr,
    2, // UInt64
    -1,
    true,  false, false,
    //   3 - PerfApp.MainPageViewModel.TotalRenderTicks
    L"TotalRenderTicks",
    &GetValueTypeMember_TotalRenderTicks<::PerfApp::MainPageViewModel, ::default::uint64>,
    nullptr,
    2, // UInt64
    -1,
    true,  false, false,
    //   4 - PerfApp.MainPageViewModel.CurrentRenderIteration
    L"CurrentRenderIteration",
    &GetValueTypeMember_CurrentRenderIteration<::PerfApp::MainPageViewModel, ::default::uint32>,
    nullptr,
    3, // UInt32
    -1,
    true,  false, false,
    //   5 - PerfApp.MainPageViewModel.CurrentParseIteration
    L"CurrentParseIteration",
    &GetValueTypeMember_CurrentParseIteration<::PerfApp::MainPageViewModel, ::default::uint32>,
    nullptr,
    3, // UInt32
    -1,
    true,  false, false,
    //   6 - PerfApp.MainPageViewModel.MaxParseTicks
    L"MaxParseTicks",
    &GetValueTypeMember_MaxParseTicks<::PerfApp::MainPageViewModel, ::default::uint64>,
    nullptr,
    2, // UInt64
    -1,
    true,  false, false,
    //   7 - PerfApp.MainPageViewModel.MaxRenderTicks
    L"MaxRenderTicks",
    &GetValueTypeMember_MaxRenderTicks<::PerfApp::MainPageViewModel, ::default::uint64>,
    nullptr,
    2, // UInt64
    -1,
    true,  false, false,
    //   8 - PerfApp.MainPageViewModel.ParsePercentage
    L"ParsePercentage",
    &GetValueTypeMember_ParsePercentage<::PerfApp::MainPageViewModel, ::default::uint32>,
    nullptr,
    3, // UInt32
    -1,
    true,  false, false,
    //   9 - PerfApp.MainPageViewModel.RenderPercentage
    L"RenderPercentage",
    &GetValueTypeMember_RenderPercentage<::PerfApp::MainPageViewModel, ::default::uint32>,
    nullptr,
    3, // UInt32
    -1,
    true,  false, false,
    //  10 - PerfApp.MainPageViewModel.AverageParseTicks
    L"AverageParseTicks",
    &GetValueTypeMember_AverageParseTicks<::PerfApp::MainPageViewModel, ::default::uint64>,
    nullptr,
    2, // UInt64
    -1,
    true,  false, false,
    //  11 - PerfApp.MainPageViewModel.AverageRenderTicks
    L"AverageRenderTicks",
    &GetValueTypeMember_AverageRenderTicks<::PerfApp::MainPageViewModel, ::default::uint64>,
    nullptr,
    2, // UInt64
    -1,
    true,  false, false,
    //  12 - PerfApp.MainPageViewModel.MaxRenderFile
    L"MaxRenderFile",
    &GetReferenceTypeMember_MaxRenderFile<::PerfApp::MainPageViewModel>,
    nullptr,
    0, // String
    -1,
    true,  false, false,
    //  13 - PerfApp.MainPageViewModel.MaxParseFile
    L"MaxParseFile",
    &GetReferenceTypeMember_MaxParseFile<::PerfApp::MainPageViewModel>,
    nullptr,
    0, // String
    -1,
    true,  false, false,
    //  14 - PerfApp.MainPageViewModel.CurrentFile
    L"CurrentFile",
    &GetReferenceTypeMember_CurrentFile<::PerfApp::MainPageViewModel>,
    nullptr,
    0, // String
    -1,
    true,  false, false,
};

PCWSTR GetShortName(PCWSTR longName)
{
    PCWSTR separator = wcsrchr(longName, '.');
    return separator != nullptr ? separator + 1: longName;
}

const TypeInfo* GetTypeInfo(::Platform::String^ typeName)
{
    auto typeNameLength = typeName->Length();
    if (typeNameLength < _countof(TypeInfoLookup) - 1)
    {
        for (UINT i = TypeInfoLookup[typeNameLength]; i < TypeInfoLookup[typeNameLength+1]; i++)
        {
            if (typeName == ::Platform::StringReference(TypeInfos[i].typeName))
            {
                return &TypeInfos[i];
            }
        }
    }
    return nullptr;
}

const MemberInfo* GetMemberInfo(::Platform::String^ longMemberName)
{
    auto lastDotIndex = longMemberName->Length();
    while (true)
    {
        if (longMemberName->Data()[lastDotIndex] == '.')
        {
            const TypeInfo* pTypeInfo = GetTypeInfo(ref new ::Platform::String(longMemberName->Data(), lastDotIndex));
            const TypeInfo* pNextTypeInfo = pTypeInfo + 1;
            if (pTypeInfo)
            {
                PCWSTR shortMemberName = GetShortName(longMemberName->Data());
                for (int i = pTypeInfo->firstMemberIndex; i < pNextTypeInfo->firstMemberIndex; i++)
                {
                    if (wcscmp(shortMemberName, MemberInfos[i].shortName) == 0)
                    {
                        return &MemberInfos[i];
                    }
                }
            }
            break;
        }
        if (lastDotIndex == 0)
        {
            break;
        }
        lastDotIndex--;
    }
    return nullptr;
}

::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::OtherProviders::get()
{
    if(_otherProviders == nullptr)
    {
        auto otherProviders = ref new ::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>();
        _otherProviders = otherProviders;
    }
    return _otherProviders;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlType(::Platform::String^ typeName)
{
    const TypeInfo* pTypeInfo = GetTypeInfo(typeName);
    const TypeInfo* pNextTypeInfo = pTypeInfo + 1;
    if (pTypeInfo == nullptr || pNextTypeInfo == nullptr)
    {
        return nullptr;
    }
    else if (pTypeInfo->flags & TypeInfo_Flags_IsSystemType)
    {
        return ref new ::XamlTypeInfo::InfoProvider::XamlSystemBaseType(typeName);
    }
    else
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(
            this, 
            ::Platform::StringReference(pTypeInfo->typeName), 
            this->GetXamlTypeByName(::Platform::StringReference(pTypeInfo->baseTypeIndex >= 0 ? TypeInfos[pTypeInfo->baseTypeIndex].typeName : L"")));
        userType->KindOfType = pTypeInfo->kindofType;
        userType->Activator = pTypeInfo->activator;
        userType->CollectionAdd = pTypeInfo->collectionAdd;
        userType->DictionaryAdd = pTypeInfo->dictionaryAdd;
        userType->FromStringConverter = pTypeInfo->fromStringConverter;
        userType->ContentPropertyName = ::Platform::StringReference(pTypeInfo->contentPropertyName);
        userType->IsLocalType = pTypeInfo->flags & TypeInfo_Flags_IsLocalType;
        userType->IsReturnTypeStub = pTypeInfo->flags & TypeInfo_Flags_IsReturnTypeStub;
        userType->IsBindable = pTypeInfo->flags & TypeInfo_Flags_IsBindable;
        userType->IsMarkupExtension = pTypeInfo->flags & TypeInfo_Flags_IsMarkupExtension;
        userType->CreateFromStringMethod = nullptr;
        int nextMemberIndex = pTypeInfo->firstMemberIndex;
        for (int i=pTypeInfo->firstMemberIndex; i < pNextTypeInfo->firstMemberIndex; i++)
        {
            userType->AddMemberName(::Platform::StringReference(MemberInfos[i].shortName));
            nextMemberIndex++;
        }
        return userType;
    }
}

::Windows::UI::Xaml::Markup::IXamlMember^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlMember(::Platform::String^ longMemberName)
{
    ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = nullptr;
    const MemberInfo* pMemberInfo = GetMemberInfo(longMemberName);
    if (pMemberInfo != nullptr)
    {
        xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(
            this,
            ::Platform::StringReference(pMemberInfo->shortName),
            ::Platform::StringReference(TypeInfos[pMemberInfo->typeIndex].typeName));
        xamlMember->Getter = pMemberInfo->getter;
        xamlMember->Setter = pMemberInfo->setter;
        xamlMember->TargetTypeName = pMemberInfo->targetTypeIndex >= 0 ? ::Platform::StringReference(TypeInfos[pMemberInfo->targetTypeIndex].typeName) : L"";
        xamlMember->IsReadOnly = pMemberInfo->isReadOnly;
        xamlMember->IsDependencyProperty = pMemberInfo->isDependencyProperty;
        xamlMember->IsAttachable = pMemberInfo->isAttachable;
    }
    return xamlMember;
}

