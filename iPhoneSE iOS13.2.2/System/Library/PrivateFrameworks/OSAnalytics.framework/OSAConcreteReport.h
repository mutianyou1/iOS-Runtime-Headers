/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OSAConcreteReport <NSObject>
@optional
-(BOOL)isActionable;
-(id)additionalIPSMetadata;

@required
-(id)problemType;
-(id)appleCareDetails;
-(id)reportNamePrefix;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2;

@end
