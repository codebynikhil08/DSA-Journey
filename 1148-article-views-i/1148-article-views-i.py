import pandas as pd

def article_views(views: pd.DataFrame) -> pd.DataFrame:
    views.drop_duplicates("author_id")
    return views[
        (views["author_id"] == views["viewer_id"])
    ][["author_id"]].drop_duplicates().rename(columns={"author_id":"id"}).sort_values("id")