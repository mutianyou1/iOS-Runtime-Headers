/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMSenderChatItem : IMTranscriptChatItem {

	IMHandle* _handle;

}

@property (nonatomic,readonly) IMHandle * handle;              //@synthesize handle=_handle - In the implementation block
-(Class)__ck_chatItemClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IMHandle *)handle;
-(id)_initWithItem:(id)arg1 handle:(id)arg2 ;
@end

