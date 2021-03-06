/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libPPM.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libPPM.dylib/libPPM.dylib-Structs.h>
@interface PPMClientUserClientInterface : NSObject {

	BOOL _attribute;
	unsigned _connect;

}

@property (readonly) BOOL attribute;                //@synthesize attribute=_attribute - In the implementation block
@property (readonly) unsigned connect;              //@synthesize connect=_connect - In the implementation block
-(BOOL)attribute;
-(unsigned)connect;
-(int)openPPMUserClient:(unsigned)arg1 clientNumber:(int)arg2 ;
-(int)admissionCheckOfValuePPM:(unsigned)arg1 clientNumber:(unsigned)arg2 level:(int)arg3 result:(unsigned*)arg4 ;
-(int)stopActivity:(unsigned)arg1 clientNumber:(unsigned)arg2 level:(int)arg3 ;
-(int)startActivity:(unsigned)arg1 clientNumber:(unsigned)arg2 level:(int)arg3 ;
-(int)pushTelemetry:(unsigned)arg1 userDictRef:(UserClientTelemetryDict*)arg2 ;
-(int)closePPMUserClient:(unsigned)arg1 ;
-(int)setBudget:(unsigned)arg1 clientNumber:(unsigned)arg2 value:(unsigned)arg3 ;
-(int)setDebugFlag:(unsigned)arg1 value:(unsigned)arg2 ;
@end

