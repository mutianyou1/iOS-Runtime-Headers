/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVTStickerRecentsPresetsProvider : NSObject
+(void)filteredAndPaddedStickerRecordsWithRecents:(id)arg1 paddingMemojiIdentifier:(id)arg2 avatarStore:(id)arg3 numberOfStickers:(long long)arg4 resultBlock:(/*^block*/id)arg5 ;
+(id)paddedStickerRecordsWithRecents:(id)arg1 paddingMemojiIdentifier:(id)arg2 numberOfStickers:(long long)arg3 ;
+(id)filteredRecentStickers:(id)arg1 withAvailableRecordIdentifiersMap:(id)arg2 ;
+(id)presetsGivenOneMemojiWithIdentifier:(id)arg1 ;
+(id)presetsGivenNoMemoji;
@end
