# RControlPanel --- Independent ReactOS Control Panel

# CMake minimum version
cmake_minimum_required(VERSION 3.5)

# project name and languages
project(RControlPanel C RC)

##############################################################################
# Architecture

if (MSVC)
    if(CMAKE_SIZEOF_VOID_P EQUAL 8)
        add_definitions(-D_AMD64_ -D_M_AMD64)
    else()
        add_definitions(-D_X86_ -D_M_IX86)
    endif()
endif()

##############################################################################
# control.exe

add_executable(control WIN32
    control.c
    control.rc
    winmain.c)

target_compile_definitions(control PRIVATE
    UNICODE _UNICODE _CRT_SECURE_NO_WARNINGS
    LANGUAGE_BG_BG
    LANGUAGE_CS_CZ
    LANGUAGE_DA_DK
    LANGUAGE_DE_DE
    LANGUAGE_EL_GR
    LANGUAGE_EN_US
    LANGUAGE_ES_ES
    LANGUAGE_ET_EE
    LANGUAGE_EU_ES
    LANGUAGE_FI_FI
    LANGUAGE_FR_FR
    LANGUAGE_HE_IL
    LANGUAGE_HI_IN
    LANGUAGE_HR_HR
    LANGUAGE_HU_HU
    LANGUAGE_HY_AM
    LANGUAGE_ID_ID
    LANGUAGE_IT_IT
    LANGUAGE_JA_JP
    LANGUAGE_KO_KR
    LANGUAGE_LT_LT
    LANGUAGE_MS_MY
    LANGUAGE_NB_NO
    LANGUAGE_NL_NL
    LANGUAGE_NO_NO
    LANGUAGE_PL_PL
    LANGUAGE_PT_BR
    LANGUAGE_PT_PT
    LANGUAGE_RO_RO
    LANGUAGE_RU_RU
    LANGUAGE_SK_SK
    LANGUAGE_SL_SI
    LANGUAGE_SQ_AL
    LANGUAGE_SV_SE
    LANGUAGE_TH_TH
    LANGUAGE_TR_TR
    LANGUAGE_UK_UA
    LANGUAGE_UZ_UZ
    LANGUAGE_ZH_CN
    LANGUAGE_ZH_HK
    LANGUAGE_ZH_TW)

target_compile_definitions(control PRIVATE -DSTRSAFE_NO_DEPRECATE -D__REACTOS__ -D__RCONTROLPANEL__)
target_include_directories(control PUBLIC ./ reactos/)
target_link_libraries(control PRIVATE shlwapi user32 gdi32 comctl32 kernel32)

if (MSVC)
    # No default manifest
    target_link_options(control PRIVATE /MANIFEST:NO)
endif()

##############################################################################
