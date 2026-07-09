SELECT b.name
FROM Employee a
JOIN Employee b
ON a.managerId = b.id
GROUP BY b.id, b.name
HAVING COUNT(*) >= 5;