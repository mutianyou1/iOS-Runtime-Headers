/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIDraggingSessionDelegate <NSObject>
@optional
-(unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingWithinApp:(BOOL)arg2;
-(BOOL)draggingSessionPrefersFullSizePreviews:(id)arg1;
-(BOOL)draggingSessionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg1;
-(void)draggingSessionWillBegin:(id)arg1;
-(void)draggingSessionDidMove:(id)arg1;
-(void)draggingSession:(id)arg1 willAddItems:(id)arg2;
-(void)draggingSessionWillEnd:(id)arg1 withOperation:(unsigned long long)arg2;
-(void)draggingSessionDidEnd:(id)arg1 withOperation:(unsigned long long)arg2;
-(void)draggingSessionDidTransferItems:(id)arg1;
-(void)_draggingSessionHandedOffDragImage:(id)arg1;
-(void)_draggingSession:(id)arg1 handedOffDragImageForItem:(id)arg2;

@end

