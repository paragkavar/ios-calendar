//
//  CXCalendarView.h
//  Calendar
//
//  Created by Vladimir Grichina on 13.07.11.
//  Copyright 2011 Componentix. All rights reserved.
//

#import <Three20UI/Three20UI+Additions.h>
#import <Three20Style/Three20Style+Additions.h>

#import "CXCalendarCellView.h"

@protocol CXCalendarViewDelegate;

@interface CXCalendarView : TTView {
    NSDate *_selectedDate;

    TTView *_monthBar;
    TTLabel *_monthLabel;
    TTButton *_monthBackButton;
    TTButton *_monthForwardButton;
    TTView *_gridView;
}

@property(retain) NSDate *selectedDate;

@property(readonly) TTView *monthBar;
@property(readonly) TTLabel *monthLabel;
@property(readonly) TTButton *monthBackButton;
@property(readonly) TTButton *monthForwardButton;
@property(readonly) TTView *gridView;

@property(assign) id<CXCalendarViewDelegate> delegate;

- (CXCalendarCellView *) cellForDate: (NSDate *) date;

- (void) monthForward;
- (void) monthBack;

@end

@protocol CXCalendarViewDelegate <NSObject>

- (void) calendarView: (CXCalendarView *) calendarView didSelectDate: (NSDate *) date;

@end
