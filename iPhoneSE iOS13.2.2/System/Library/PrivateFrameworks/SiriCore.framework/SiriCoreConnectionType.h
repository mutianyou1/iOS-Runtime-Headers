/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SiriCoreConnectionType : NSObject {

	long long _technology;

}
-(id)description;
-(long long)technology;
-(BOOL)isEdge;
-(id)initWithTechnology:(long long)arg1 ;
-(BOOL)isWWAN;
-(BOOL)canUseWiFiDirectly;
-(long long)diagnosticConnectionType;
-(unsigned long long)aggregatorConnectionType;
@end

