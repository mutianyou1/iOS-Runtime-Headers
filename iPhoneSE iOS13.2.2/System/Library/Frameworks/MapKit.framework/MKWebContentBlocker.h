/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface MKWebContentBlocker : NSObject {

	NSCache* _regularExpressionCache;

}
+(id)sharedBlocker;
-(id)_regularExpression;
-(BOOL)shouldBlockLoadingOfURL:(id)arg1 ;
@end
