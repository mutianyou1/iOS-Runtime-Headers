/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFUserSettings;

@interface WebBookmarkWebFilterSettings : NSObject {

	WFUserSettings* _userSettings;

}

@property (nonatomic,readonly) WFUserSettings * userSettings; 
@property (getter=isWebFilterEnabled,nonatomic,readonly) BOOL webFilterEnabled; 
@property (getter=isWebFilterWhiteListOnlyModeEnabled,nonatomic,readonly) BOOL webFilterWhiteListOnlyModeEnabled; 
+(id)sharedWebFilterSettings;
-(id)init;
-(void)dealloc;
-(WFUserSettings *)userSettings;
-(BOOL)isWebFilterEnabled;
-(BOOL)isWebFilterWhiteListOnlyModeEnabled;
-(void)reloadSettings;
@end

