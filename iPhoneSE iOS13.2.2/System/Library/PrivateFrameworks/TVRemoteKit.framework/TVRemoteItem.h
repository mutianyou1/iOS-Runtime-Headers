/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteKit.framework/TVRemoteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVRemoteItem <NSObject>
@optional
-(BOOL)isRemoteItemCollection;
-(id)remoteItems;
-(long long)remoteItemIcon;
-(void)handleRemoteAction;

@required
-(id)remoteItemTitle;

@end
