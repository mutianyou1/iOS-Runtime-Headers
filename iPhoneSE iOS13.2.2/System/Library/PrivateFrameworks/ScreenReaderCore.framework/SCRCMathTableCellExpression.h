/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathRowExpression.h>

@interface SCRCMathTableCellExpression : SCRCMathRowExpression {

	BOOL _didGetTablePosition;
	unsigned long long _rowIndex;
	unsigned long long _columnIndex;
	unsigned long long _tableRowCount;
	unsigned long long _tableColumnCount;

}
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)prefixForChildAtIndex:(unsigned long long)arg1 ;
-(id)suffixForChildAtIndex:(unsigned long long)arg1 ;
-(id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)mathMLTag;
-(void)_getTableDataIfNecessary;
-(id)_prefixForCell;
-(id)_suffixForCell;
@end
