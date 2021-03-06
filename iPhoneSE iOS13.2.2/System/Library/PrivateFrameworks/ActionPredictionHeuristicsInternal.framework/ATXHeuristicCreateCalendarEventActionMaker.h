/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionPredictionHeuristicsInternal/ATXHeuristicActionMaker.h>

@class ATXHeuristicObjectHandle, NSString;

@interface ATXHeuristicCreateCalendarEventActionMaker : ATXHeuristicActionMaker {

	ATXHeuristicObjectHandle* _event;
	NSString* _suggestionsInfoUniqueKey;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_makeAction;
-(id)actionTypeName;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 event:(id)arg3 suggestionsInfoUniqueKey:(id)arg4 ;
@end

