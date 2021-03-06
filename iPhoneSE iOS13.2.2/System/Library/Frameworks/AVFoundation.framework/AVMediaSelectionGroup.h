/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMediaSelectionGroupInternal, NSArray, AVMediaSelectionOption;

@interface AVMediaSelectionGroup : NSObject <NSCopying> {

	AVMediaSelectionGroupInternal* _mediaSelectionGroup;

}

@property (nonatomic,readonly) NSArray * options; 
@property (nonatomic,readonly) AVMediaSelectionOption * defaultOption; 
@property (nonatomic,readonly) BOOL allowsEmptySelection; 
+(id)playableMediaSelectionOptionsFromArray:(id)arg1 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 withMediaCharacteristics:(id)arg2 ;
+(id)mediaSelectionGroupWithAsset:(id)arg1 dictionary:(id)arg2 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 withLocale:(id)arg2 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 withoutMediaCharacteristics:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)options;
-(id)dictionary;
-(id)_groupID;
-(id)asset;
-(id)_weakReference;
-(id)mediaSelectionOptionWithPropertyList:(id)arg1 ;
-(BOOL)_isStreamingGroup;
-(BOOL)allowsEmptySelection;
-(BOOL)_matchesGroupID:(id)arg1 mediaType:(id)arg2 ;
-(AVMediaSelectionOption *)defaultOption;
-(id)_groupMediaType;
-(id)_groupMediaCharacteristics;
-(id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2 ;
@end

