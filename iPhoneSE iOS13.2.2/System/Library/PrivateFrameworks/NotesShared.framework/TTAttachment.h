/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TTAttachment.h>

@protocol TTAttachment <TTModelAttributeComparable,NSObject>
@required
-(id)attachmentIdentifier;
-(id)attachmentUTI;
-(id)attachmentInContext:(id)arg1;

@end


@class NSString;

@interface TTAttachment : NSObject <TTAttachment> {

	NSString* _attachmentIdentifier;
	NSString* _attachmentUTI;

}

@property (nonatomic,retain) NSString * attachmentIdentifier;              //@synthesize attachmentIdentifier=_attachmentIdentifier - In the implementation block
@property (nonatomic,retain) NSString * attachmentUTI;                     //@synthesize attachmentUTI=_attachmentUTI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isAttachment:(id)arg1 equalToModelComparable:(id)arg2 ;
-(BOOL)isEqualToModelComparable:(id)arg1 ;
-(NSString *)attachmentIdentifier;
-(NSString *)attachmentUTI;
-(id)attachmentInContext:(id)arg1 ;
-(void)setAttachmentIdentifier:(NSString *)arg1 ;
-(void)setAttachmentUTI:(NSString *)arg1 ;
@end

