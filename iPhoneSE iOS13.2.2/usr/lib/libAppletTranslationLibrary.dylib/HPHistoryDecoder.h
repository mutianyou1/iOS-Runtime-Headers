/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
@interface HPHistoryDecoder : NSObject
+(id)getTransactionDate:(id)arg1 ;
+(unsigned short)getHistoryNumber:(id)arg1 ;
+(unsigned short)getTypeOfUse:(id)arg1 ;
+(SCD_Struct_HP2)getTransactionBalance:(id)arg1 ;
+(SCD_Struct_HP4)getSectorInformation:(id)arg1 ;
+(int)getTransactionAmount:(id)arg1 withPreviousBlock:(id)arg2 ;
+(id)_decodeShinkansenTrainDataWithBlock:(id)arg1 andBlock:(id)arg2 ;
+(SCD_Struct_HP2)getCommuterBalance:(id)arg1 ;
+(BOOL)getGreenCarTicketUsed:(id)arg1 ;
+(SCD_Struct_HP5)getInOutStation:(id)arg1 ;
+(BOOL)getIsBlackListed:(id)arg1 ;
+(id)parseSuicaHistoryBlocks:(id)arg1 withIDm:(id)arg2 ;
+(id)parseGreencarBlocks:(id)arg1 ;
+(id)parseShinkansenBlocks:(id)arg1 fromServiceCode:(unsigned short)arg2 ;
@end

