/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDHistoryDecoder : NSObject
+(id)getTransactionDate:(id)arg1 ;
+(id)getTransactionAmount:(id)arg1 ;
+(unsigned short)getHistoryNumber:(id)arg1 ;
+(id)getDPAN:(id)arg1 ;
+(id)parseIDHistoryBlocks:(id)arg1 ;
+(unsigned short)getTypeOfUse:(id)arg1 ;
+(id)getExpirationDate:(id)arg1 ;
+(id)generateEndEventFromHCI:(id)arg1 withTransceiver:(id)arg2 ;
@end
