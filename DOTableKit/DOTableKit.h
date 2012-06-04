//
//  DOTableKit.h
//  DOTableKit
//
//  Created by Hezi Cohen on 5/14/12.
//  Copyright (c) 2012 DoAT Media Ltd.. All rights reserved.
//

#import "DOTableDefinition.h"
#import "DOTableSection.h"
#import "DOTableElement.h"
#import "DOTableElementCell.h"

#import "DOTableTextEntryElement.h"
#import "DOTableTextEntryElementCell.h"

#import "DOTableBooleanElement.h"
#import "DOTableSwitchElementCell.h"
#import "DOTableCheckElementCell.h"

#import "DOTableDetailLabelElement.h"

#import "DOTablePhotoElement.h"
#import "DOTablePhotoElementCell.h"

#define rgbColor(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
