/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNPhotoPickerActionsDelegate <NSObject>
@required
-(void)actionsModel:(id)arg1 didAssignToContact:(id)arg2 atIndexPath:(id)arg3;
-(void)actionsModel:(id)arg1 didEdit:(id)arg2 atIndexPath:(id)arg3;
-(void)actionsModel:(id)arg1 didDuplicate:(id)arg2 atIndexPath:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)actionsModel:(id)arg1 didDelete:(id)arg2 atIndexPath:(id)arg3;

@end

