/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXAnalyticsEvent.h>

@class NSURL;

@interface SXLinkTapEvent : SXAnalyticsEvent {

	NSURL* _destinationURL;

}

@property (nonatomic,readonly) NSURL * destinationURL;              //@synthesize destinationURL=_destinationURL - In the implementation block
-(NSURL *)destinationURL;
-(id)initWithDestinationURL:(id)arg1 ;
@end
