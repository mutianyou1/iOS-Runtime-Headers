/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MWFeedParserDelegate <NSObject>
@optional
-(void)feedParserDidStart:(id)arg1;
-(void)feedParser:(id)arg1 didParseFeedInfo:(id)arg2;
-(void)feedParser:(id)arg1 didParseFeedItem:(id)arg2;
-(void)feedParserDidFinish:(id)arg1;
-(void)feedParser:(id)arg1 didFailWithError:(id)arg2;

@end
